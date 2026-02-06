#include <iostream>
using namespace std;

int replaceZeroWithFive(int n) {
    int result = 0, place = 1;

    if (n == 0) {
        return 5;  // Special case if number is exactly 0
    }

    while (n > 0) {
        int digit = n % 10;
        if (digit == 0) {
            digit = 5;
        }
        result = result + digit * place;
        place *= 10;
        n /= 10;
    }

    return result;
}

int main() {
    int N;
    cin >> N;

    cout << replaceZeroWithFive(N) << endl;

    return 0;
}
