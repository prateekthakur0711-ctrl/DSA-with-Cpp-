#include <iostream>
using namespace std;

int main (){

	int n; cin >> n;
	int a = 0, b = 1;

	for (int r = 1; r <= n; r++)
	{
		for (int i = 1; i <= r; i++)
		{
			cout << a << " ";
			int c = a + b;
			a = b;
			b = c;
		}
		cout << endl;
	}
	  
	  return 0;
}