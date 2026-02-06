#include <iostream>
using namespace std;

int main (){

	int n,no;
	cin >> n;

	for (int r = 0; r <= n; ++r){
		if (r % 2 == 0) no = 0;    // in case of 1 statement brackets can be skipped
		else no = 1;

		for (int i = 1; i <= r; ++i){
			cout << no << " ";
			no = 1 - no ;
                                      
		}
		cout << endl;
	}
	 
	  return 0;
}