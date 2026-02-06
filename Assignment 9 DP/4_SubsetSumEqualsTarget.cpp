#include<bits/stdc++.h>
using namespace std;

bool subsetExist(vector<int> &a, int n, int target){
	vector <bool> dp(target + 1, false);
	dp[0] = true;
	for (int i = 0; i < n; i++)
	{
		for (int j = target; j >= a[i]; j--)
		{
			dp[j] = dp[j] || dp[j - a[i]];
		}
	}
	return dp[target];
}

int main() {
	int n, target;
	cin >> n >> target;
	vector <int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	if (subsetExist(a, n, target) == true) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}