#include <iostream>
using namespace std;

// Function to compute GCD using Euclidean algorithm
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute LCM
long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;  // To prevent overflow
}

int main() {
    long long N1, N2;
    cin >> N1 >> N2;

    if (N1 > 0 && N2 > 0 && N1 < 1000000000 && N2 < 1000000000) {
        cout << lcm(N1, N2) << endl;
    }

    return 0;
}
