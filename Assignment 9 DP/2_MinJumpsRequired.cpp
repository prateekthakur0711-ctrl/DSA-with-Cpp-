#include <bits/stdc++.h>
using namespace std;

int minJump(int *a, int n){
	if (n <= 1) return 0;
	if (a[0] == 0) return INT_MAX;

	int reach = a[0];
	int jump = 1;
	int step = a[0];
	for (int i = 1; i < n; i++)
	{
		if (i >= n - 1) return jump;
		reach = max(reach, i + a[i]);
		step--;

		if (step == 0){
			jump++;
			if (i >= reach) return INT_MAX;
			step = reach - i;
		}
	}
	return INT_MAX;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = minJump(arr, n);
        if (ans == INT_MAX)
            cout << "INT_MAX\n";
        else
            cout << ans << "\n";
    }
    return 0;
}