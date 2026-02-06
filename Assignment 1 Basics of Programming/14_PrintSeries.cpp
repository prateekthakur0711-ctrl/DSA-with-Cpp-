#include <iostream>
using namespace std;

void printSeries(int N1, int N2) {
    int count = 0;
    int n = 1;

    while (count < N1) {
        int term = 3 * n + 2;
        if (term % N2 != 0) {
            cout << term << endl;
            count++;
        }
        n++;
    }
}

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    if (N1 > 0 && N1 < 100 && N2 > 0 && N2 < 100) {
        printSeries(N1, N2);
    } else {
        cout << "Inputs must be in range 0 < N1 < 100 and 0 < N2 < 100" << endl;
    }

    return 0;
}
