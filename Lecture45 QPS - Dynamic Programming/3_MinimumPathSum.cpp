#include <iostream>
#include <vector>
using namespace std;

// BottomUp
class Solution{
public:
    int minPathSum(vector<vector<int>> &grid){
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp(m, vector<int> (n));
        dp[0][0] = grid[0][0];
        for (int i = 1; i < n; ++i) dp[0][i] = dp[0][i - 1] + grid[0][i];
        for (int i = 1; i < m; ++i) dp[i][0] = dp[i - 1][0] + grid[i][0];

        for (int i = 1; i < m; ++i)
        {
            for (int j = 1; j < n; ++j)
            {
                dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j - 1]);
            }
        }

        return dp[m - 1][n - 1];  
    }
};

//TopDown
class{
public:
    int m, n;
    vector<vector<int>> dp;

    int solve(int i, int j, vector<vector<int>> &grid){
        if (i < 0 || j < 0) return 1e9;
        if (i == 0 && j == 0) return grid[0][0];
        if (dp[i][j] != -1) return dp[i][j];

        int up = solve(i - 1, j, grid);
        int down = solve(i, j - 1, grid);

        return dp[i][j] = grid[i][j] + min(up, down);
    }

    int minPathSum(vector<vector<int>> &grid){
        m = grid.size();
        n = grid[0].size();

        dp.assign(m, vector<int> (n, - 1));

        return solve(m - 1, n - 1, grid);
    }

}
