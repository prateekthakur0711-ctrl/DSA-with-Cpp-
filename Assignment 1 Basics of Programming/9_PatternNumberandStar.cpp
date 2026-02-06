#include <iostream>
using namespace std;

int main (){

	int n, i, c;
	cin >> n;

	for (int r = 1; r <= n; r++)
	{
		for (i = 1; i <= n; i++)
		{
			if (i <= r)
				cout << i;
			else
				cout << "*" ;

		}
		
		cout << endl;
	}
	
	  return 0;
}