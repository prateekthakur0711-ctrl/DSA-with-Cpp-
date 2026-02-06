#include <iostream>
using namespace std;

int main (){

	int n;
	cin >> n;

	int i = 1;
	while (i <= n){
        cout << i << " ";

		if (i == 3){         // continue without updation is infinite loop, use Ctrl + C to exit, update efore continue
			i++;
			continue;
		}
		i = i + 1;
	}
	  
	  return 0;
}