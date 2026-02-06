#include <iostream>
#include <cmath> // For pow function

using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int original = num;
    int n = 0;
    int temp = num;

    // Count number of digits
    while (temp > 0) {
        n++;
        temp /= 10;
    }

    temp = num;
    int sum = 0;

    // Calculate the sum of each digit raised to the power n
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, n); // pow from cmath
        temp /= 10;
    }

    // Return true if sum matches original number
    return sum == original;
}

int main() {
    int N;
    cin >> N;

    if (isArmstrong(N)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
