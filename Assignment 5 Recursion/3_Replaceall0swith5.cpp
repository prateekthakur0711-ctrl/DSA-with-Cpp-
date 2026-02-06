#include <iostream>
using namespace std;

int convertZeroToFive(int n) {
    if (n == 0)
        return 0;

    int digit = n % 10;
    if (digit == 0) digit = 5;

    return convertZeroToFive(n / 10) * 10 + digit;
}

int main() {
    int n;
    cin >> n;

    if (n == 0)
        cout << 5;
    else
        cout << convertZeroToFive(n);

    return 0;
}
