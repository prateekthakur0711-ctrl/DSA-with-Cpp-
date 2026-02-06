#include <iostream>
using namespace std;

int main (){

	int n, i, r, j;
    cin >> n;

	for (r = 1; r <= n; r++)
	{
		for (i = 1; i <= r - 1; i ++)
		{
			cout << " ";
		}
		for (j = n; j >= r; j--)
		{
			cout << "* ";
		}

		cout << endl;
	}
	  
	  return 0;
}