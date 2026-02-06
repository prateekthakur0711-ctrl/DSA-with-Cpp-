#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main() {

	int n; cin >> n;

	vector <int> a(n), b(n);

	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];

	map <int, int> h;

	for (int i = 0; i < n; i++) h[a[i]]++;

	vector <int> ans;

	for (int i = 0; i < n; i++)
	{
		if (h[b[i]] > 0)
		{
			ans.push_back(b[i]);
			h[b[i]]--;
		}
	}

	sort(ans.begin(), ans.end());

	cout << "[";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i != ans.size() - 1) cout << ", ";
    }
    cout << "]";

 
	return 0;
}