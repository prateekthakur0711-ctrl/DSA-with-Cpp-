#include <iostream>
using namespace std;

bool ratInMaze(char maze[][10], int i, int j, int n, int m, int sol[][10]) {
    // Base case: destination reached
    if (i == n - 1 && j == m - 1) {
        sol[i][j] = 1;
        // Print the solution
        for (int x = 0; x < n; x++) {
            for (int y = 0; y < m; y++) {
                cout << sol[x][y] << " ";
            }
            cout << endl;
        }
        return true;  // Stop recursion (since path is unique)
    }

    // Check boundaries and blockages
    if (i < 0 || j < 0 || i >= n || j >= m || maze[i][j] == 'X' || sol[i][j] == 1)
        return false;

    // Mark current cell as part of path
    sol[i][j] = 1;

    // Move Right
    if (ratInMaze(maze, i, j + 1, n, m, sol))
        return true;

    // Move Down
    if (ratInMaze(maze, i + 1, j, n, m, sol))
        return true;

    // Move Left
    if (ratInMaze(maze, i, j - 1, n, m, sol))
        return true;

    // Move Up
    if (ratInMaze(maze, i - 1, j, n, m, sol))
        return true;

    // Backtrack: unmark the current cell
    sol[i][j] = 0;
    return false;
}

int main() {
    int N, M;
    cin >> N >> M;

    char maze[10][10];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> maze[i][j];
        }
    }

    // Check if start or end are blocked
    if (maze[0][0] == 'X' || maze[N - 1][M - 1] == 'X') {
        cout << "NO PATH FOUND";
        return 0;
    }

    int sol[10][10] = {0};

    bool pathExists = ratInMaze(maze, 0, 0, N, M, sol);

    if (!pathExists)
        cout << "NO PATH FOUND";

    return 0;
}
