#include <iostream>
using namespace std;

bool checkprime(int n){
	for (int i = 2; i < n; ++i)
	{
		if (n % i == 0){
			return false;
		}
	}
	return true;
}

int main (){

	if (checkprime(7) == true){
		cout << "Prime\n";
	}
	else {
		cout << "Not Prime\n";
	}


/*
    bool ans = checkprime(7);

    if (ans == true){
    	cout << "Prime\n";
    }
    else {
    	cout << "Not Prime\n";
    } */
	
	  return 0;
}