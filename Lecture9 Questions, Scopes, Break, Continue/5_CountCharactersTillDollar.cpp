#include <iostream>
using namespace std;

int main (){

	int cnt = 0;

	char ch;
	cin >> ch;

	while (ch != '$'){ // != means not equal to dollar

		cnt++;

		cin >> ch;

	  }

	  cout << " Total Characters Count: " << cnt << endl;

	  return 0;
}