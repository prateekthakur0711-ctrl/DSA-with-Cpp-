#include <iostream>
#include <vector>
using namespace std;

int main(){

    long long n, W;
    cin >> n >> W;

    vector<int> w(n), v(n);

    for (int i = 0; i < n; ++i) cin >> w[i] >> v[i];

    vector<long long> dp(100001, 1e18);
    dp[0] = 0;

    for (int i = 0; i < n; i++)
    {
        for (int val = 100000; val >= v[i]; val--)
        {
            dp[val] = min(dp[val], dp[val - v[i]] + w[i]);
        }
    }

    int ans = 0;
    for (int i = 0; i <= 100000; i++)
    {
        if (dp[i] <= W) ans = i;
    }
    cout << ans << endl;

    return 0;
}