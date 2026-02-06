#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    vector<vector<int> > ans;

    void solve(vector<int> &ip, vector<int> &op, int i, int target) {
        if (target == 0) {
            ans.push_back(op); // op wale vector ko store krlo kyunki uske andar ek answer hoga...
            return;
        }
        // base case
        if (i == ip.size()) {
            return;
        }

        for (int j = i; j < ip.size(); ++j)
        {
            if (target >= ip[j]) {
                op.push_back(ip[j]);
                solve(ip, op, j, target - ip[j]);
                op.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum(vector<int>& ip, int target) {
        vector<int> op;
        solve(ip, op, 0, target);

        return ans;
    }
};