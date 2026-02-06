#include<iostream>
#include<queue>
#include<functional>
using namespace std;

int main() {

	priority_queue<int, vector<int>, greater<int> > h;
	int n, k;
	cin >> n;
	cin >> k;
	int cs = 0;

	for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        h.push(data);
		
        if (h.size() > k) {
            h.pop();
        }
    }

	cout << h.top() << endl;

	return 0;
}