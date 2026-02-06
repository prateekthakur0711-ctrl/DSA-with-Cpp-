#include <bits/stdc++.h>
using namespace std;

int bottomUp(string &s1, string &s2, string &s3) {
    int l = s1.size();
    int m = s2.size();
    int n = s3.size();

    int dp[2][101][101] = {}; 

    for (int i = 1; i <= l; i++) {
        int curr = i % 2;
        int prev = (i-1) % 2;

        for (int j = 1; j <= m; j++) {
            for (int k = 1; k <= n; k++) {
                if (s1[i-1] == s2[j-1] && s2[j-1] == s3[k-1]) {
                    dp[curr][j][k] = 1 + dp[prev][j-1][k-1];
                } else {
                    dp[curr][j][k] = max({ dp[prev][j][k], dp[curr][j-1][k], dp[curr][j][k-1] });
                }
            }
        }
    }

    return dp[l % 2][m][n];
}

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    cout << bottomUp(s1, s2, s3) << endl;
}
