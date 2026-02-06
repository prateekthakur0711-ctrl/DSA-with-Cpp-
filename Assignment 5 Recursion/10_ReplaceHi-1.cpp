#include <iostream>
#include <cstring>
using namespace std;

int countHi(char s[], int i) {
    if (s[i] == '\0' || s[i+1] == '\0') return 0;

    if (s[i] == 'h' && s[i+1] == 'i')
        return 1 + countHi(s, i + 2);

    return countHi(s, i + 1);
}

void removeHi(char s[], int i, char out[], int j) {
    if (s[i] == '\0') {
        out[j] = '\0';
        return;
    }

    if (s[i] == 'h' && s[i+1] == 'i') {
        removeHi(s, i + 2, out, j);     
        return;
    }

    out[j] = s[i];
    removeHi(s, i + 1, out, j + 1);
}

void replaceHi(char s[], int i, char out[], int j) {
    if (s[i] == '\0') {
        out[j] = '\0';
        return;
    }

    if (s[i] == 'h' && s[i+1] == 'i') {
        out[j] = 'b';
        out[j+1] = 'y';
        out[j+2] = 'e';
        replaceHi(s, i + 2, out, j + 3);   // skip "hi"
        return;
    }

    out[j] = s[i];
    replaceHi(s, i + 1, out, j + 1);
}

int main() {
    char s[1000];
    cin >> s;

    char rem[1000], rep[1000];

    cout << countHi(s, 0) << endl;

    removeHi(s, 0, rem, 0);
    cout << rem << endl;

    replaceHi(s, 0, rep, 0);
    cout << rep << endl;

    return 0;
}