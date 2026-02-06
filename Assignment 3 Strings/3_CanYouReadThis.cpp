#include <iostream>
#include <cstring>
using namespace std;

void clearread(char s[])
{
	int begin = 0;
	int len = strlen(s);
	for (int i = 0; i <= len; ++i)
	{
		if (s[i] >= 'A' && s[i] <= 'Z' || s[i] == '\0')
		{
			for (int j = begin; j < i; ++j)
			{
				cout << s[j];
			}
			cout << endl;
			begin = i;
		}
	}
}

int main (){

	char s[1000];
    cin >> s;

    clearread(s);

	  return 0;
}