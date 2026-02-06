#include <iostream>
#include <cstring>
using namespace std;

void replacePi(char s[1000]){
	if (s[0] == '\0' || s[1] == '\0')
		return;

	if (s[0] == 'p' && s[1] == 'i'){
		int len = strlen(s);
		for (int j = len + 1; j>= 2; j--)
		{
			s[j + 2] = s[j];
		}
		s[0] = '3';
		s[1] = '.';
		s[2] = '1';
		s[3] = '4';
	}
	replacePi(s + 1);
}

int main (){

	int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        char s[1000]; 
        cin.getline(s, 1000);

        replacePi(s);

        cout << s << endl;
    }

	  return 0;
}