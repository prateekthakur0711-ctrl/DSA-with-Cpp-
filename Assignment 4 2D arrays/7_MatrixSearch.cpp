#include <iostream>
using namespace std;

bool ms(int r, int c, int a[100][100],int key)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; ++j)
        {
            if (a[i][j] == key) return 1;
        }
    }
    return 0;
}

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

    int key;
    cin >> key;

    cout << ms(r, c, a, key) << endl;

      return 0;
}