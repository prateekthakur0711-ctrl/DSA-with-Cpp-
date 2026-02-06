#include <iostream>
using namespace std;

int nthtriangle(int i, int sum)
{
	if (i < 0) return sum;
	sum = sum + i;
	return nthtriangle(i - 1,sum);
}

int main (){

	int n;
	cin >> n;

	cout << nthtriangle(n,0);

	return 0;
}