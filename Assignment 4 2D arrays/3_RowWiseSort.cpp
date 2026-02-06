#include <iostream>
using namespace std;

void rowwisesort(int r, int c, int arr[100][100]) {
    for (int i = 0; i < r; i++) {
        for (int k = 0; k < c - 1; k++) {
            for (int j = 0; j < c - k - 1; j++) {
                if (arr[i][j] > arr[i][j + 1]){
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
        }
    }
}  

int main() {
    int r, c;
    cin >> r >> c;
    int arr[100][100];

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }

    rowwisesort(r, c, arr);

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}