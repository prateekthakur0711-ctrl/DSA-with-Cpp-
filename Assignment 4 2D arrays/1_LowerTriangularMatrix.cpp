#include <iostream>
using namespace std;

bool LT(int n, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    if (LT(n, arr))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
