#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void insertionSort(vector<float> &bucket){
	for (int i = 0; i < bucket.size(); i++){
		float hpc = bucket[i];
		int j = i - 1;
		while (j >= 0 && bucket[j] > hpc){
			bucket[j + 1] = bucket[j];
			j--;
		}
		bucket[j + 1] = hpc;
	}
}

void bucketSortFloat(vector<float> &arr){
	int n = arr.size();
	vector<vector<float>> bucket(n);

	// Distribute elements
	for (int i = 0; i < n; i++)
	{
		int index = n * arr[i];
		bucket[index].push_back(arr[i]);
	}

	// Sort each bucket
	for (int i = 0; i < n; i++) 
		insertionSort(bucket[i]);

	// Concatenate the bucket
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; i < bucket[i].size(); i++)
		{
			arr[k++] = bucket[i][j];
		}
	}
}

void insertionSortGeneral(vector<int>& bucket) {
    for (int i = 1; i < bucket.size(); i++) {
        int key = bucket[i];
        int j = i - 1;

        while (j >= 0 && bucket[j] > key) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = key;
    }
}

void bucketSortGeneral(vector<int> &arr){
	int n = arr.size();
	if (n == 0) return;

	int minVal = arr[0], maxVal = arr[0];
	for (int num : arr){
		minVal = min(minVal, num);
		maxVal = max(maxVal, num);
	}

	int k = floor(sqrt(n));
	if (k == 0) k = 1;

	int bucketRange = ceil((double)(maxVal - minVal + 1) / k);

	vector<vector<int>> bucket(n);

	// Distribute Elements
	for (int i = 0; i < n; i++){
		int index = (arr[i] - minVal) / bucketRange;
		bucket[index].push_back(arr[i]);
	}

	// Sort the buckets and concatenate
    int idx = 0;
    for (int i = 0; i < k; i++) {
        insertionSortGeneral(bucket[i]);
        for (int num : bucket[i]) {
            arr[idx++] = num;
        }
    }

}

int main() {
    vector<float> arr1 = {0.78, 0.17, 0.39, 0.26, 0.72, 0.94, 0.21, 0.12, 0.23, 0.68};
    bucketSortFloat(arr1);
    for (float num : arr1)
        cout << num << " ";

    cout << endl;

    vector<int> arr2 = {29, 25, 3, 49, 9, 37, 21, 43};
    bucketSortGeneral(arr2);
    for (int num : arr2)
        cout << num << " ";

    return 0;
}