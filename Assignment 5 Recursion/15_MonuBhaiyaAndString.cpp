#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


int main() {

    string s;
    cin >> s;

    int freq[26] = {0};
    bool used[26] = {false};

    //count freq for each character
    for (int i = 0; i < s.size(); i++) {
        freq[s[i] - 'a']++;
    }

    string res = "";

    for (int i = 0; i < s.size(); i++) {
        freq[s[i] - 'a']--; // use this character
        if (used[s[i] - 'a'])continue;
        //maintain lex smallest order using stack behavior
        while (res.size() && res[res.size() - 1] > s[i] && freq[res[res.size() - 1] - 'a'] > 0) {
            used[res[res.size() - 1] - 'a'] = false;
            res.pop_back();
        }

        res.push_back(s[i]);
        used[s[i] - 'a'] = true;
    }
    cout << res << endl;
    return 0;
}