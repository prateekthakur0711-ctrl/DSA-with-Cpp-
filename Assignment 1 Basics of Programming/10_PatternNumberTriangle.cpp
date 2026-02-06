#include <iostream>
using namespace std;

int main (){

	int n, r, i, j;
	cin >> n;

	for (r = 1; r <= n; ++r)
	{
		for (i = 1; i <= n - r; ++i)
		{
			cout << "   ";
		}
		int num = r;
		for (j = 1; j <= r; ++j)
		{
			cout << num << "  ";
			num++;
		}

		num = num - 2;
		for (j = 1; j < r; ++j)
		{
			cout << num << "  ";
			num--;
		}
		cout << endl;
	}

	 
	  return 0;
}