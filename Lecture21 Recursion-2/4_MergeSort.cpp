#include <iostream>
using namespace std;

// Fixed merge: logical flow is easier if we use b and c as the sorted sources
void merge(int *a, int *b, int *c, int s, int e) {
    int m = (s + e) / 2;
    int n1 = m - s + 1;
    int n2 = e - m;

    int i = 0, j = 0, k = s;

    // Standard merge logic
    while (i < n1 && j < n2) {
        if (b[i] <= c[j]) { // Comparison: check left vs right
            a[k++] = b[i++];
        } else {
            a[k++] = c[j++];
        }
    }

    // Clean up remaining elements
    while (i < n1) a[k++] = b[i++];
    while (j < n2) a[k++] = c[j++];
}

void mergeSort(int *a, int s, int e) {
    if (s >= e) return;

    int m = s + (e - s) / 2; // Safer way to calculate midpoint
    int n1 = m - s + 1;
    int n2 = e - m;

    int b[n1], c[n2];

    // Copying data to temporary arrays
    for (int i = 0; i < n1; i++) b[i] = a[s + i];
    for (int i = 0; i < n2; i++) c[i] = a[m + 1 + i];

    // Recursively sort the TWO HALVES
    mergeSort(b, 0, n1 - 1);
    mergeSort(c, 0, n2 - 1);

    // Merge the sorted halves back into a
    merge(a, b, c, s, e);
}

int main() {
    int a[] = {6, 5, 7, 4, 3, 8, 9, 0, 1, 2, -11, 784, -10000};
    int n = sizeof(a) / sizeof(a[0]);

    mergeSort(a, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}