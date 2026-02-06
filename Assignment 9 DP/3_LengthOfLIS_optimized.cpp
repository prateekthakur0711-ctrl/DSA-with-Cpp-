#include<bits/stdc++.h>
using namespace std;

int LIS(int *a, int n) {
	vector<int> t;
    for (int i = 0; i < n; i++)
    {
        int val = a[i]; 
        auto pos = lower_bound(t.begin(), t.end(), a[i]) - t.begin();
        if (pos == t.size()) t.push_back(val);
        else t[pos] = val;
    }
    return t.size();
}
int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << LIS(a, n) << endl;
    return 0;
}