#include <iostream>
using namespace std;

void toh(int n, char src, char helper, char destination)
{
	if (n == 0)
	{
		return;
	}
	// 1. Ask recursion to move n - 1 discs from src to helper
	toh(n - 1, src, destination, helper);
	// 2. Move nth disc from src to destination
	cout << "Take " << n << " th disc from " << src << " to " << destination << endl;
	// 3. Ask recursion to move n  - 1 discs from helper to destination
	toh(n - 1, helper, src, destination); 
}

int main (){

	int n;
	cin >> n;
	toh(n, 'A', 'B', 'C');

	  return 0;
}
