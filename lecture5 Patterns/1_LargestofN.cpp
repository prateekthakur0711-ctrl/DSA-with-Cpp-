#include <iostream>
#include <climits>
using namespace std;

int main () {
	int ans = INT_MIN, i, no;

	const int n = 5;

	i = 1;
	while (i <= n) {

		cin >> no;

		if (no > ans) {
			ans = no; // we check if input no is greater than ans and then simply update ans
		}

		i = i + 1; 

	}
	  
    cout << "Largest: " << ans << endl;


	  return 0;
}
