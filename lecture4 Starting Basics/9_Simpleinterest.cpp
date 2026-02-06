#include <iostream>
using namespace std;

int main (){
    
    int p,r,t;
    float si;

    cin >> p >> r >> t;

    si = ( p * r * t ) / 100.0; // to correct output int/float will give float hence the decimal point nhi to int/int int output dega

    cout << " Simple Interest: " << si << endl; // \n = endl


	 
	  return 0;
}