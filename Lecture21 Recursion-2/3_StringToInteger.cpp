#include <iostream>
#include <cstring>
using namespace std;

int stringToInt(char *a, int n){
	//Base case
	if (n == 0){
		return 0;
	}

	//Recursive case
    int ld = a[n - 1] - '0';
    return stringToInt(a, n - 1) * 10 + ld;

}

int main (){

	// int x = '4' - '0'; this is to get the number through it's ascii value
    char a[] = "1234";

    int x = stringToInt((a), strlen(a));

    cout << "X     :" << x << endl;
    cout << "X + 10:" << x + 10 << endl;
	
	  return 0;
}