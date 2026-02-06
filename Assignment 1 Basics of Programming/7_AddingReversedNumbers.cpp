#include <iostream>

using namespace std;

// Function to reverse an integer number using arithmetic
long long reverseNumber(long long num) {
    long long rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        long long A, B;
        cin >> A >> B;

        // Reverse A and B
        long long revA = reverseNumber(A);
        long long revB = reverseNumber(B);

        // Add reversed numbers
        long long sum = revA + revB;

        // Reverse the sum and print
        cout << reverseNumber(sum) << endl;
    }

    return 0;
}
