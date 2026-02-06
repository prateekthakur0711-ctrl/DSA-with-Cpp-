#include <iostream>
#include <cstring>
using namespace std;

int convert(char s[100], int n)
{
	if (n == 0) return 0;

	int last = s[n - 1] - '0';

	int ans = convert(s, n - 1);

	return ans*10 + last;

}

int main() {

	char s[1000];
	cin >> s;
	int n = strlen(s);
	cout << convert(s, n) << endl;

	  return 0;
}