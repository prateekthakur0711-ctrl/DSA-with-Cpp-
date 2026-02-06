#include <iostream>
using namespace std;

void printCelAndFarTable(int init, int fval, int step) {// arguments
                // order matters here
    int f, c;
	f = init; 
	while (f <= fval) { 

		c = (5 / 9.0) * (f - 32);

		cout << f << " " << c << endl;

		f = f + step;
    }

}

int main (){

	int f, init, fval, step;

	//cin >> init >> fval >> step;

	//printTable(init, fval, step); // parameters

	printCelAndFarTable(0, 300, 20); // parameters

	printCelAndFarTable(0, 350, 50); // parameters
	 
	  return 0;
}