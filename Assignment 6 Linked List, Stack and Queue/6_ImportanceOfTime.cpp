#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {

	vector<int> ideal;
	int n;
	cin >> n;
	queue<int> q;

	for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        q.push(d);
    }

    for (int i = 0; i < n; i++) {
        int f;
        cin >> f;
        ideal.push_back(f);
    }

	int time = 0;
	int i = 0;
	while(!q.empty()){
		if (q.front() == ideal[i]){
			q.pop();
			time++;
			i++;
		}
		else{
			int x = q.front();
			q.pop();
			q.push(x);
			time++;
		}
	}

	cout << time << endl;

	return 0;
}