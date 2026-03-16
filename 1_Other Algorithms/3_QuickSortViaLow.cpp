#include<iostream>
using namespace std;

int partition(int A[], int low, int high){
	int pivot = A[low];
	int i = low;
	for (int j = low + 1; j <= high; j++)
	{
		if (A[j] < pivot){
			i++;
			swap(A[i], A[j]);
		}
	}
	swap(A[low], A[i]);
	return i;
}

void QuickSort(int A[], int low, int high){
	if (low < high){
		int p = partition(A, low, high);
		QuickSort(A, low, p - 1);
		QuickSort(A, p + 1,  high);
	}
}

int main(){
	int A[] = {4, 2, 1, 0, 8, -4, 9, 19};
	int n = sizeof(A) / sizeof(A[0]);
	QuickSort(A, 0, n - 1);
	for (int i = 0; i < n; i++) cout << A[i] << " ";
	return 0;
}
