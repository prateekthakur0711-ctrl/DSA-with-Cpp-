#include <bits/stdc++.h>
using namespace std;

void solve(string &s, int indx, string out) {
    if (indx == s.size()) {
        cout << out << endl;
        return;
    }

    if (s[indx] != '0') {
        char ch = 'A' + (s[indx] - '0') - 1;
        solve(s, indx + 1, out + ch);
    }

    if (indx + 1 < s.size()) {
        int n = (s[indx] - '0') * 10 + (s[indx + 1] - '0');
        if (n >= 10 && n <= 26) {
            char ch = 'A' + n - 1;
            solve(s, indx + 2, out + ch);
        }
    }
}

int main() {
    string s;
    cin >> s;
    solve(s, 0, "");
    return 0;
}
