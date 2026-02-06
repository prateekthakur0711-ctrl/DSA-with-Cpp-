#include <iostream>
#include <cstring>
using namespace std;

void EvenOddAscii(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            s[i] = s[i] + 1; 
        } else {
            s[i] = s[i] - 1; 
        }
    }
}

int main() {
    char s[1001];
    cin >> s;

    EvenOddAscii(s);
    cout << s;

    return 0;
}