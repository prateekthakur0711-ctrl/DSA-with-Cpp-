#include <iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int rob(vector<int> &nums){
        int n = nums.size();
        int dp[n];

        // Base case
        dp[0] = nums[0];
        if (n > 1) dp[1] = max(nums[1], nums[0]);

        for (int i = 2; i < n; ++i)
        {
            // Recurrence
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }
        return dp[n - 1]; 
    }
    
};
