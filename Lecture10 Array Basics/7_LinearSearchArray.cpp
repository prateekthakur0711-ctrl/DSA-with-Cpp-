#include <iostream>
using namespace std;

int main (){

	int a[] = {1, 2, 3, 4, 5}, i;
	int n = sizeof(a) / sizeof(int);

	int key;
	cout << "Enter key: ";
	cin >> key;

	for (i = o; i < n; ++i)
	{
		if (a[i] == key){
			cout << "Key found at: " << i << endl;
		}
	}

	  return 0;
}