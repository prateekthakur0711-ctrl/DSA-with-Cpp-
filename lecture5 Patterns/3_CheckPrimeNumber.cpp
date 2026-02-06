#include <iostream>
using namespace std;

int main (){

	int number, i, flag;
	cin >> number;

	flag = 1; // Initially the flag is 1
	i = 2;
	while (i <= number -1) {

		if (number % i == 0){
			// we dont want to end the program once we know that the number is not prime
			flag = 2; // On number not being prime I will change the flag to 2
		}

		i = i + 1;
	}

    // Loop ke bahar check if the number is prime or not
	if (flag == 1) {
       cout << number; // Print the number only if it is prime
	}
	
	  
	  return 0;
}