#include <iostream>
using namespace std;

void printArray(int a[], int n){
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
    }
    cout << endl;

}
void bubbleSort(int a[],  int n){

	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - 1; ++j)
		{
			if (a[j] > a[j + 1]) 
			{
				swap(a[j],a[j + 1]);
			}
		}    
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main (){

	int a[8] = {5, 4, 6, 4, 3, 2, 7, 1};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n);
	bubbleSort(a, n);
	printArray(a, n);

	  return 0;
}