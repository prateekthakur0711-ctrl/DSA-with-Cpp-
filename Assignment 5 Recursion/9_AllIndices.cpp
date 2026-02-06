#include<iostream>
using namespace std;

void keyfind(int a[100], int key, int i, int n){
	if (a[i] == key) {
		cout << i << " ";
	}
	if (i == n) return;
	keyfind(a, key, i + 1, n);
}

int main() {

	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) cin >> a[i];
	int key;
	cin >> key;
	keyfind(a, key, 0, n);

	return 0;
}