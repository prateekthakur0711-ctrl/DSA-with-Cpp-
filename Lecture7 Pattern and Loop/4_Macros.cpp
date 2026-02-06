#include <iostream>
using namespace std;
#define PI 3.14

int main (){

    int r;
    cin >> r;

    cout << "Circumference: " << 2 * (PI) * r << endl; // lets say I define pi to be 3.14+1 then computer will apply distibution
                                                       // property , to prevent it I used brackets

	  return 0;
}