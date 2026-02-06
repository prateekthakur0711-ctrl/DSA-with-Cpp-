#include <iostream>
using namespace std;

void spiralPrintAnti(int a[][100], int rows, int cols)
{
    int sr = 0, er = rows - 1, sc = 0, ec = cols - 1;

    while (sr <= er && sc <= ec) {
        // 1. Left column 
        for (int r = sr; r <= er; ++r)
            cout << a[r][sc] << ", ";
        sc++;

        // 2. Bottom row 
        if (sr <= er) {
            for (int c = sc; c <= ec; ++c)
                cout << a[er][c] << ", ";
            er--;
        }

        // 3. Right column 
        if (sc <= ec) {
            for (int r = er; r >= sr; --r)
                cout << a[r][ec] << ", ";
            ec--;
        }

        // 4. Top row 
        if (sr <= er) {
            for (int c = ec; c >= sc; --c)
                cout << a[sr][c] << ", ";
            sr++;
        }
    }

    cout << "END";
}

int main() {
    int a[100][100], rows, cols;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    spiralPrintAnti(a, rows, cols);
    return 0;
}


