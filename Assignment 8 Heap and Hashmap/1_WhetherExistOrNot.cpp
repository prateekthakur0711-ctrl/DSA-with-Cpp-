#include<iostream>
#include<unordered_set>
using namespace std;

int main() {

	int t;
	cin >> t;

	while (t--){
		int l;
		cin >> l;

		unordered_set <int> s;

		for (int i = 0; i < l; i++)
		{
			int x;
			cin >> x;
			s.insert(x);
		}

		int q;
		cin >> q;

		while (q--){
			int n;
			cin >> n;

			if (s.find(n) != s.end()) cout << "Yes\n";
			else cout << "No\n";
		}
	}

	return 0;
}