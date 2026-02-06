#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> res;

void gen(string curr, int open, int close, int n) {
    if (curr.size() == 2 * n) {
        res.push_back(curr);
        return;
    }

    if (open < n) gen(curr + "(", open + 1, close, n);
    if (close < open) gen(curr + ")", open, close + 1, n);
}

bool comp(string &a, string &b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            int va = (a[i] == '(') ? 1 : 0;
            int vb = (b[i] == '(') ? 1 : 0;
            return va < vb;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    gen("", 0, 0, n);

    sort(res.begin(), res.end(), comp);

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << "\n";
    }
}
