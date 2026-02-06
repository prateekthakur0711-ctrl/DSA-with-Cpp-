#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n;

	int *arr = new int arr[n];

	for (int i = 0; i < n; ++i) cin >> arr[i];

	int dp[n];

	dp[0] = arr[0];

	for (int i = 0; i < n; ++i) dp[i] = dp[i - 1]  + arr[i];

	for (int i = 0; i < n; ++i) cout << dp[i] << " "; // overall TC is O(N)

	return 0;
}