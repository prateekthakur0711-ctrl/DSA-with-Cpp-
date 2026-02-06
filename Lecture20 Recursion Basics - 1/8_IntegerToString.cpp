#include <iostream>
using namespace std;

char keys[][10] = {
	"zero","one","two","three","four","five","six","seven","eight","nine"
};

void intToString(int n){
	// Base case
    if (n == 0){
    	return;
    }

	// Recursive case
    int ld = n % 10;
    
    intToString(n / 10);

    cout << keys[ld] << " ";
}

int main (){

	int n;
	cin >> n;

	intToString(n);

	  return 0;
}