#include <iostream>
using namespace std;

int first7(int *a, int n, int i = 0){
	// Base case
	if ( i == n){
		return -1;
	}

	// Recursive case
	if (a[i] == 7){
		return i;
	}

	return first7(a, n, i + 1);

}

int last7(int *a, int n){
	// Base case
	if (n == 0){
		return - 1;
	}

	// Recursive case
	if (a[n - 1] == 7){
		return n - 1;
	}

	return last7(a, n - 1);

}

void allIndex7(int *a, int n, int i){
	// Base case
	if (i == n){
		return;
	} 
    // I will check ith index and print if the value is 7 at that index
    if (a[i] == 7){
    	cout << i  << " ";
    }

    // I will ask recursion to do the work for the smaller array
    allIndex7(a, n, i + 1);
}

int main (){

	int a[] = {1, 2, 7, 3, 4, 7, 5};
	int n = sizeof(a) / sizeof(int);

	cout << first7(a, n) << endl;
	cout << last7(a, n) << endl;
	allIndex7(a, n, 0);

	  return 0;
}