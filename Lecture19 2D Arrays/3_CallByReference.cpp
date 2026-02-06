#include <iostream>
using namespace std;

void update(int &x) // reference variable (we create another name to that bucket)
{
    x++;
}

void update1(int *x) // pointer (we store address)
{
    *x += 10;
}

int main (){

	int a = 1;
    int b = 1;

    update(b);
    update1(&a);
    
    cout << b << endl;
    cout << a << endl;

	  return 0;
}