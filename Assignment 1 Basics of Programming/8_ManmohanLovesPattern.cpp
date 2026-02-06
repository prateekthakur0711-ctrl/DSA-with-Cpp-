#include <iostream>
using namespace std;

int main (){

	int n, r, i;
	cin >> n;

	for (r = 1; r <= n; ++r)
	{
		if (r == 1)
		{
			cout << 1;
		}
		else if (r % 2 == 0)
		{
			for (i = 1; i <= r; ++i)
			{
				if (i == 1 || i == r)
					{
						cout << 1;
					}
					else
					{
						cout << 0;
					}
			}
		}

		else 
		{
			for (i = 1; i <= r; ++i)
			{
				cout << 1;
			}
		}

		cout << endl;
	}
	  
	  return 0;
}