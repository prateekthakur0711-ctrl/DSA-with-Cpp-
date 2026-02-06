#include <iostream>
using namespace std;

int countDigitOccurrences(int number, int digit) {
    int count = 0;

    // Special case when number is 0
    if (number == 0 && digit == 0) {
        return 1;
    }

    while (number > 0) {
        int lastDigit = number % 10;
        if (lastDigit == digit) {
            count++;
        }
        number /= 10;
    }

    return count;
}

int main() {
    int number, digit;
    cin >> number >> digit;

    if (number < 0 || number > 1000000000 || digit < 0 || digit > 9) {
        cout << "Invalid input. Constraints: 0 <= number <= 1000000000, 0 <= digit <= 9" << endl;
        return 1;
    }

    int result = countDigitOccurrences(number, digit);
    cout << result << endl;

    return 0;
}
