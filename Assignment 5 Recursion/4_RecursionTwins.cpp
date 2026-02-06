#include <iostream>
#include <cstring>
using namespace std;

int countTwins(char str[], int i, int n) {
    if (i + 2 >= n)
        return 0;

    int count = 0;
    if (str[i] == str[i + 2])
        count = 1;

    return count + countTwins(str, i + 1, n);
}

int main() {
    char str[1000];
    cin >> str;

    int n = strlen(str);

    cout << countTwins(str, 0, n);

    return 0;
}
