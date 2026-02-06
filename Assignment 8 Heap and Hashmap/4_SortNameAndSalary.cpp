#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<functional>
using namespace std;

int main() {

	map<int, vector<string>, greater<int>> h;
	int x, n;
	cin >> x;
	cin >> n;

	while (n--){
		string s;
		int m;
		cin >> s >> m;

		if (m >= x){
			h[m].push_back(s);
		}
	}

	for (auto &x : h) {
    	int salary = x.first;
    	vector<string> &names = x.second;

    	sort(names.begin(), names.end());

    	for (string &name : names) {
        	cout << name << " " << salary << endl;
    	}
	}

	return 0;
}