#include <iostream>
using namespace std;

int main (){

	int a = 1;

	// ap is a pointer to bucket a or ap is a pointer to an integer bucket
	int *ap = &a;

	cout << &a << endl;
	cout << ap << endl;

	// For float datatypes
	float f = 1.1;
	float *t; // Pointer to a float bucket, it can store address of a float bucket
	t = &f; // We stored the address inside the buckett that is a pointer of float bucket

	cout << &f << endl;
	cout << t << endl;
	  
	  return 0;
}