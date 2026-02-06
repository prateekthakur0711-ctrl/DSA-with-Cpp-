#include <iostream>
#include <climits>
using namespace std;

int main (){

	int n;
    cin >> n;
    int a[100][100];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int indx = 0;
    int maxcol = INT_MIN;

    for (int i = 0; i < n; ++i)
    {
        int sum = 0;
        for (int j = 0; j < n; ++j)

        {
            sum += a[j][i];
        }
        if (sum > maxcol)
        {
            maxcol = sum;
            indx = i;
        }
    }

    cout << (indx + 1) << " " << maxcol << endl;

      return 0;
}