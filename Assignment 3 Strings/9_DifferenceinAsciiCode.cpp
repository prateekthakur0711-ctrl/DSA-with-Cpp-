#include <iostream>
#include <cstring>
using namespace std;

void diffInAscii(char a[])
{
	int len = strlen(a);
	for (int i = 0; i < len; ++i)
	{
		if (i != len - 1) cout << a[i] << a[i+1] - a[i];
		else cout << a[i];
	}
}

int main (){

	char a[10000];
	cin >> a;

	diffInAscii(a);

	  return 0;
}