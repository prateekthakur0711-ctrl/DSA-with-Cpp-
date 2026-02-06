#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1000][1000];  

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }
  
    // Transpose
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    //Reverse column 
    for (int j = 0; j < n; ++j) {
        int top = 0, bottom = n - 1;
        while (top < bottom) {
            int temp = arr[top][j];
            arr[top][j] = arr[bottom][j];
            arr[bottom][j] = temp;
            top++;
            bottom--;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
