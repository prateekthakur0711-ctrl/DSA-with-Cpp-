#include<iostream>
#include<vector>
using namespace std;

int uniqueNum1(vector<int> a)
{
	int res = 0;
	for (int i = 0; i < a.size(); i++)
	{
		res = res ^ a[i];
	}
	return res;
}

int main(){
	vector <int> v = {2, 3, 5, 4, 5, 3, 4};
	cout << uniqueNum1(v) << endl;
	return 0;
}