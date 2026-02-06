#include <iostream>
#include <vector>
using namespace std;

int subsetSum(int index, int n, vector<int>& arr, int target, int currentSum, vector<int>& current) {

    // Base case
    if (index == n) {
        if (currentSum == target) {
            for (int i = 0; i < current.size(); i++) 
			{
                cout << current[i] << " ";
            }
            cout << " ";   
            return 1;      
        }
        return 0;       
    }

    // Include current element
    current.push_back(arr[index]);
    int include = subsetSum(index + 1, n, arr, target, currentSum + arr[index], current);
    current.pop_back(); 

    // Exclude current element
    int exclude = subsetSum(index + 1, n, arr, target, currentSum, current);

    return include + exclude;
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];

    int target;
    cin >> target;

    vector<int> current;
    int count = subsetSum(0, N, arr, target, 0, current);

    cout << endl << count;
    return 0;
}
