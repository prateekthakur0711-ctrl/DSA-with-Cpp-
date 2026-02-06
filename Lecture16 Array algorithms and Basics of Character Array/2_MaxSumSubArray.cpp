#include <iostream>
#include <climits>
using namespace std;

int main (){

	int a[] = {1, 2, 3, -15, 4, 5};
	int n = sizeof(a) / sizeof(int);

	if (n == 0){// corner case
	    cout << "Empty SubArray, Sum :" << 0 << endl;
	}

	int ans = INT_MIN;
	int si, ei;

	//All the subarrays
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			//Before iterating over the subarray ek bucket lelo jisme sum find karenge
			int subArraySum = 0;
			for (int k = i; k <= j; ++k)
			{
				//cout << a[k] << " ";
				subArraySum += a[k];
			}
			// Subaray par iterate krke sum nikalna hai usse print kardo
			//cout << ", Sum : " << subArraySum << endl;
			if (subArraySum > ans){// agar sum bada hai subarray ka ans update karo
				ans = subArraySum;
				si = i; // Jis subarray ka sum nikalna hai vo i,j ki range wale index ka hai
				        // us range ko bhi store kar lo
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