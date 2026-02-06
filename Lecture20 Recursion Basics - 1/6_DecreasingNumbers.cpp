#include <iostream>
using namespace std;

void solve(int n){
	if (n == 0){
		return;
	}
	// Here we work while going upwards in recursion

    // solve(n - 1); if this done, we will print like 1 2 3 4 5 ..

    // Here we work while returnong from top
	cout << n << " ";

	solve(n - 1);
	
}

int main (){

	int n;
	cin >> n;
	solve(n);

	  return 0;
}
