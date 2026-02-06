#include <iostream>
#include <cstring>
using namespace std;

void removeDuplicates(char a[])
{
	int len;
	len = strlen(a);
	for (int i = 0; i < len; ++i)
	{
		if (a[i] != a[i+1])  cout << a[i];
	} 
}

int main (){

	char a[1000];
	cin >> a;

	removeDuplicates(a);

	  return 0;
}