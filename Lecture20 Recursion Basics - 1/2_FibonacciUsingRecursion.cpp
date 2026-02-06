#include <iostream>
using namespace std;

int fibo(int n){
	// Base case
	if (n == 0 || n == 1){
		return n;
	}

	// Recursive case: fibo(n) = fibo(n - 1) + fibo(n - 2)
	//int smaller1 = fibo(n - 1);
	//int smaller2 = fibo(n - 2);
	//int bigger = smaller1 + smaller2;
	//return bigger;

	return fibo(n - 1) + fibo(n - 2);
}

int main (){

	cout << fibo(5) << endl;
	cout << fibo(10) << endl;

	  return 0;
}