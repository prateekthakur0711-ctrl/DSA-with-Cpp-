#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

	int n;
	cin >> n;

	int *a = new int[n];
	for (int i = 0; i < n; i++) cin >> a[i];

	int ans = a[0];
	int cnt = 0;

	unordered_map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		m[a[i]]++;

		if (m[a[i]] > cnt){
			ans = a[i];
			cnt = m[a[i]];
		}
	}

	cout << ans << endl;

	return 0;
}