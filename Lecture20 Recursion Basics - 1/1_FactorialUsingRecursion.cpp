#include <iostream>
using namespace std;

int fact(int n){
	// Base case
	if (n == 0){
		return 1;
	}

	// Recursive equation: fact(n) = n * fact(n - 1)
	int smaller = fact(n-1); // function calling itself
	int bigger = n * smaller;
	return n*fact(n-1); // or simply return bigger
}

int main (){

	cout << fact(5) << endl;
	cout << fact(4) << endl;
	cout << fact(6) << endl;

	  return 0;
}