#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i < n; i += 2) {

        if (v[i] < v[i - 1]) {
            swap(v[i], v[i - 1]);
        }

        if (i + 1 < n && v[i] < v[i + 1]) {
            swap(v[i], v[i + 1]);
        }
    }

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
