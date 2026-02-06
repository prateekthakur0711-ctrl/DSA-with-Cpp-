#include <iostream>
#include <climits>
using namespace std;

int main (){

	int a[] = {1, 2, 4, -10, 1, 3, 5, - 20, 2, 6, -3, 4, 9};
	int n = sizeof(a) / sizeof(int);

	bool isPositivePresent = false;
	int maxElement = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] >= 0)
		{
			isPositivePresent = true;
			break;
		}
		maxElement = max(maxElement, a[i]);
	}
	if (isPositivePresent == false)
	{
		cout << "MaxSum: " << maxElement << endl;
		return 0;
	}

	int ans = 0;
	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		if (sum < 0)
		{
			sum = 0;
		}
		ans = max(ans, sum);
	}
	cout << "Max Sum : " << ans << endl;
	  
	  return 0;
}	   