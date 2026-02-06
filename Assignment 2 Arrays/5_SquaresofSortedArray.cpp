#include <iostream>
#include <cmath>
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
    	a[indx] = a[i] = a[i] * a[i];
    	indx++;
    }

    for (int i = 0; i < N - 1; ++i)
	{
		int mi = i;
		for (int j = i + 1; j < N; ++j)
		{
			if (a[j] < a[mi])
			{
				mi = j;
			}
		}

		swap(a[mi],a[i]);
	}
    
    for (int i = 0; i < N; i++)
    {
    	cout << a[i] << " ";
    }
	 
	  return 0;
}