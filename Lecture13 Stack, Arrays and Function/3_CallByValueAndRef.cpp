#include <iostream>
using namespace std;

void update1(int &a){ // once we use & value gets updated
	a = a + 1;
	cout << "Inside Update: " << a << endl;
}

void update2(int a){
    a = a + 1;
    cout << "Inside Update: " << a << endl;
}

int main (){

    int y = 2;
    cout << y << endl;

    update2(y);

    cout << y << endl;

    int x = 1;                      

    cout << x << endl;
                         
    //x = x + 1;         
    update1(x);
    cout << x << endl;
	 
	  return 0;
}