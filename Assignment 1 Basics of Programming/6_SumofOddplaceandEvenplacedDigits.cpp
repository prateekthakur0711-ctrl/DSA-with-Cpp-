#include <iostream>
using namespace std;

int main (){

	int n; cin >> n;
	int os = 0, es = 0;
	int pos = 0;
	while (n > 0)
	{
		int digit = n % 10;
		if (pos % 2 ==0)
		{
			es += digit;
		}
		else
		{
			os += digit;
		}
		n = n / 10;
		pos++;
	}
	cout << es << endl;
	cout << os << endl;
	  
	  return 0;
}