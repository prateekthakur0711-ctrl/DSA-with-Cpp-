#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if (a.first == b.first)
        return a.second < b.second; 
    return a.first > b.first;        
}


int main() {

    int n, k;  
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];  

    map<int, int> freq;
    for (int i = 0; i < n; i++) freq[nums[i]]++;

    vector<pair<int, int>> v;
    for (auto f : freq) v.push_back({f.second, f.first});

    sort(v.begin(), v.end(), cmp);

    vector<int> ans;
    for (int i = 0; i < k; i++) 
        ans.push_back(v[i].second);

    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";

    return 0;
}
