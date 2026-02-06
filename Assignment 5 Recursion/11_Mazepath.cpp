#include <iostream>
#include <string>
using namespace std;

int countpaths(int r, int c, int n, int m) {
    if (r == n && c == m) return 1;
    if (r > n || c > m) return 0;

    int right = countpaths(r, c+1, n, m);
    int down = countpaths(r+1, c, n, m);
    int diag = countpaths(r+1, c+1, n, m);

    return right + down + diag;
}

void mazepath(int r, int c, int n, int m, string path) {
    if (r == n && c == m) {
        cout << path << " ";
        return;
    }
    if (r > n || c > m) return;

    mazepath(r+1, c, n, m, path + "V");
    mazepath(r, c+1, n, m, path + "H");
    mazepath(r+1, c+1, n, m, path + "D");
}

int main() {
    int n, m;
    cin >> n; 
	cin >> m;

    mazepath(0, 0, n-1, m-1, "");

    cout << endl;

    cout << countpaths(0, 0, n-1, m-1) << endl;

    return 0;
}