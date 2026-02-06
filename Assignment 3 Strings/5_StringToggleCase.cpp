#include <iostream>
#include <cstring>
using namespace std;

void stringToggle(char s[])
{
	int len = strlen(s);
	for (int i = 0; i < len; ++i)
	{
		if (s[i] >= 'a' && s[i] <= 'z') cout << char(s[i] - 'a' + 'A');
		else if (s[i] >= 'A' && s[i] <= 'Z') cout << char(s[i] + 'a' - 'A');	
	}
}

int main (){

	char s[100000];
	cin >> s;

	stringToggle(s);
    
	  return 0;
}