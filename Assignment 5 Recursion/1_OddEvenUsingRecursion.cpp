#include <iostream>
using namespace std;

void oddprint(int n)
{
	if (n == 0) return;

	if (n % 2 != 0) cout << n << endl;

	oddprint(n - 1);	
}

void evenprint(int n, int i)
{
	if (i > n) return;

	if (i % 2 == 0) cout << i << endl;

	evenprint(n, i + 1);
}

int main (){

	int n;
	cin >> n;

	oddprint(n);
	evenprint(n, 1);	

	  return 0;
}
