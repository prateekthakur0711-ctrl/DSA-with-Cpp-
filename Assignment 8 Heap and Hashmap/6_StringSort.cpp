#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool mcmp(string a, string b){
	if (b.find(a) == 0) return false;

    if (a.find(b) == 0) return true;

	return a < b;
}

int main() {

	int n;cin >> n;
	vector<string> v;

	while (n--){
		string s;cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), mcmp);

	for (auto r : v) cout << r << endl;

	return 0;
}