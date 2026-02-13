#include <bits/stdc++.h>
using namespace std;

// Solve function for one test case
void solve() {
    int n;
    cin >> n;                     // Read the length of permutation and array
    vector<int> p(n), a(n);
    for (int i = 0; i < n; i++) cin >> p[i]; // Read permutation
    for (int i = 0; i < n; i++) cin >> a[i]; // Read target array

    // Store the last position of each value in permutation p
    // This helps us check if a value can be "propagated" to form a segment in a
    vector<int> pos(n + 1, -1); // using 1-based values
    for (int i = 0; i < n; i++) pos[p[i]] = i;

    int last = -1; // last used position in p
    bool ok = true;

    // Process each segment of equal values in array a
    for (int i = 0; i < n;) {
        int val = a[i];           // current value of the segment
        int j = i;
        while (j < n && a[j] == val) j++; // find the end of this segment

        // Check if the value appears in p **after last used position**
        // This ensures we can propagate it to the entire segment
        if (pos[val] < last) {
            ok = false;           // impossible to generate this segment
            break;
        }

        last = pos[val];          // update last used position
        i = j;                    // move to next segment
    }

    cout << (ok ? "YES\n" : "NO\n"); // print result for this test case
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;               
    while (t--) solve();
    return 0;     
}
