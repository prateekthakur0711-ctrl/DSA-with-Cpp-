#include <iostream>
using namespace std;

void UT(int n, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0 ; j < i ; j++) { 
            arr[i][j] = 0;
        }
    }
    
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

    UT(n, arr);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}