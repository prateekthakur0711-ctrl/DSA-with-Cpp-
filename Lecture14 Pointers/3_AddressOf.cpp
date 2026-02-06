#include <iostream>
using namespace std;

int main (){

	int a = 10;
	bool b = true;
	char c = 'A';
	char c1 = 'B';

	cout << &a << endl; // Address of a
	cout << sizeof(&a) << endl;

	cout << &b << endl; // Address of b
	cout << sizeof(&b) << endl;

	int arr[100] = {1, 2, 3, 4}; // All remaining buckets will get zero value

	cout << arr << endl;    //100
	cout << &arr[0] << endl;//100

	// Address of character buckets are treated differently
	cout << &c << endl;
	cout << &c1 << endl;

	//While printing address of a character bucket we need to fool the compiler by telling its an address of integer bucket

	cout << (int*)&c1 << endl;
	cout << (float*)&c << endl;
	cout << (void*)&c << endl;


	  
	  return 0;
}