#include <iostream>
using namespace std;

int main (){

	int n, no, r, c;
	cin >> n;

	for (r = 1; r <= n; r++)
	{
		for (c = 1, no = 1; c <= r; c++, no++)
		{
			cout << no * no << " ";
		}

    cout << endl;

    }
	  return 0;
}