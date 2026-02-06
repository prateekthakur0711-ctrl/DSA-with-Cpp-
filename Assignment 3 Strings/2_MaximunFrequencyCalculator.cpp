#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char s[1001];
    cin >> s;

    int lower[26] = {0};
    int upper[26] = {0};
    int len = strlen(s);

    for (int i = 0; i < len; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z')
            lower[s[i] - 'a']++;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            upper[s[i] - 'A']++;
    }

    char mostfreqchar = s[0];
    int maxfreq = 0;

    for (int i = 0; i < 26; ++i) {
        if (lower[i] > maxfreq) {
            maxfreq = lower[i];
            mostfreqchar = 'a' + i;
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (upper[i] > maxfreq) {
            maxfreq = upper[i];
            mostfreqchar = 'A' + i;
        }
    }

    cout << mostfreqchar;

    return 0;
}
