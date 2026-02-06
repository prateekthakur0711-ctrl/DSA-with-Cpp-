#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector <string> res;

void  permute(string s, int i, string &original)
{
    if (i == s.size()) {
        if (s > original) res.push_back(s);
        return;
    }

    for (int j = i; j < s.size(); j++)
    {
        swap(s[i], s[j]);
        permute(s, i + 1, original);
        swap(s[i], s[j]); // backtrack
    }

}

int main() {

    string s;
    cin >> s;

    string original = s;

    permute(s, 0, original);

    sort(res.begin(), res.end());

    for (int i = 0; i < res.size(); ++i){
        cout << res[i] << "\n";
    }

    return 0;
}