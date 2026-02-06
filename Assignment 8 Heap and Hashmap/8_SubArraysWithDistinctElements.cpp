#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    map<int, int> freq;
    long long ans = 0;
    int l = 0;
    long long MOD = 1000000007;

    for (int r = 0; r < n; r++) {
        freq[a[r]]++;

        while (freq[a[r]] > 1) {
            freq[a[l]]--;
            l++;
        }

        long long len = r - l + 1;
        ans = (ans + (len * (len + 1) / 2) % MOD) % MOD;
    }

    cout << ans << endl;
    return 0;
}
