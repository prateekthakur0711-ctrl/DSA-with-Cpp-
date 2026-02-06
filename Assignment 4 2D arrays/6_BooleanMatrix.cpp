#include <iostream>
using namespace std;

int main (){

    int r,c;
    cin >> r >> c;
    int a[100][100];

    for (int i = 0; i < r; i++) 
    {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    int row[100] = {0};
    int col[100] = {0};

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 1) {
                row[i] = 1;  
                col[j] = 1; 
            }
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (row[i] == 1 || col[j] == 1) {
                a[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
 
   
      return 0;
}