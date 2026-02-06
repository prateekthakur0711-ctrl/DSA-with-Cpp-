#include <bits/stdc++.h>
using namespace std;
 
int partition(int A[], int low, int high)
{
    int pivot = A[high];      // last element as pivot
    int i = low - 1;          // keeper of smaller elements

    for (int j = low; j <= high - 1; j++)   // explorer
    {
        if (A[j] <= pivot)
        {
            i++;
            swap(A[i], A[j]); // move smaller element to left
        }
    }

    swap(A[i + 1], A[high]); // place pivot in correct position
    return i + 1;            // pivot index
}

void quickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int p = partition(A, low, high); // pivot location

        quickSort(A, low, p - 1);   // left part
        quickSort(A, p + 1, high);  // right part
    }
}

int main()
{
    int A[] = {4, 3, 1, 9, 2, 7, 10, 6, 6};
    int n = sizeof(A) / sizeof(A[0]);

    quickSort(A, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << A[i] << " ";

    return 0;
}
