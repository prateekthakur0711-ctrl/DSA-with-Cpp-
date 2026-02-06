#include <iostream>
using namespace std;

bool isArraySorted1(int *a, int n){
	// Base case
	if (n == 0 || n == 1){
		return true;
	}

	// Recursive case
	if (a[0] < a[1] && isArraySorted1(a + 1, n - 1) == true){
		return true;
	}
	else{
		return false;
	}
}

bool isArraySorted2(int *a, int n){
	// Base case
	if (n == 0 || n == 1){
		return true;
	}

	// Recursive case
    if (a[n - 1] > a[n - 2] and isArraySorted2(a, n - 1) == true){
    	return true;
    }
    else {
    	return false;
    }
}

bool isArraySorted3(int *a, int n, int i){
	// Base case
	if (i >= n - 1){
		return true;
	}

	// Recursive case
	if (a[i] < a[i + 1] and isArraySorted3(a, n - 1, i + 1) == true){
		return true;
	}
	
	return false;
}

int main (){

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	if (isArraySorted3(a, n, 0) == true){
		cout << "Sorted\n";
	}
	else{
		cout << "Not Sorted\n";
	}

	  return 0;
}