#include <iostream>
#include <climits>
using namespace std;

int main (){

	int a[] = {1, 2, 3, -3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	if (n == 0){// corner case
	    cout << "Empty SubArray, Sum :" << 0 << endl;
	}

	int ans = INT_MIN;
	int si, ei;
	// We need to precompute prefix sum array 
	int ps[100];
	ps[0] = a[0];
	for (int i = 1; i < n; ++i)
	{
		ps[i] = ps[i - 1] + a[i];
	} 

	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int subArraySum = 0;
			subArraySum = ps[j] - (i - 1 >= 0 ? ps[i - 1] : 0);
			if (subArraySum > ans){
				ans = subArraySum;
				si = i; 
				ei = j;
			}
		}

	}

	cout << "Maximum Subarray Sum: " << ans << endl;
	cout << "Index range: " << si << ", " << ei << endl;
	for (int i = si; i <= ei; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	  
	  return 0;
}	   