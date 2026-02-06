#include <iostream>
using namespace std;

int main (){

	int no;
	cin >> no;

    int cnt = 0;
	
	while (no){
		if (no & 1){
			cnt++;
		}
		no = no >> 1;
	}

	cout << cnt << endl;
	  
	  return 0;
}	  