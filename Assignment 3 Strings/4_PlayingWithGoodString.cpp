#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    string s;
    cin >> s;

    int maxLen = 0, currLen = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (isVowel(s[i])) {
            currLen++;
            if (currLen > maxLen)
                maxLen = currLen;
        } 
        else {
            currLen = 0;  
        }
    }

    cout << maxLen << endl;
    return 0;
}

