#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char a[], int i, int j){
	while (i <= j){
		if (a[i] != a[j]){
			return false;	
		}
		i++;
		j--;
	}
	return true;
}

int palindronesubstring(char a[])
{
	int cnt = 0;
	int n = strlen(a);
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (isPalindrome(a, i, j) == true) cnt = cnt + 1;
		}
	}
	return cnt;
}	

int main (){

	char s[100000];
	cin >> s;

	cout << palindronesubstring(s);

	  return 0;
}