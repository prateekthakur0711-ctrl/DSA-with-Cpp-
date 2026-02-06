#include <iostream>
using namespace std;

int main (){

	int N;
	cin >> N;

	int a[N];

    for (int i = 0; i < N; i++)
    {
    	cin >> a[i];
    }
    
    int indx = 0;
    for (int i = 0; i < N; i++)
    {
    	if (a[i] != 0)
    	{
    		a[indx] = a[i];
    		indx++;
    	}
    }

    for (int i = indx; i < N; i++)
    {
    	a[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
    	cout << a[i] << " ";
    }
	  
	  return 0;
}