#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int N;
    cin >> N;

    if (N <= 0) {
        cout << "error" << endl;
        return 0;
    }

    int a[N];

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int maxValue = findMax(a, N);

    cout << maxValue << endl;

    return 0;
}
