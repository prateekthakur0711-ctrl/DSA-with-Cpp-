#include <bits/stdc++.h>
using namespace std;

int countWays(int idx, vector<int>& arr, int sum1, int sum2) {
    if (idx == arr.size()) {
        return sum1 == sum2 ? 1 : 0;
    }
    int count = countWays(idx + 1, arr, sum1 + arr[idx], sum2);
    count += countWays(idx + 1, arr, sum1, sum2 + arr[idx]);
    return count;
}

void printWays(int idx, vector<int>& arr, vector<int>& g1, vector<int>& g2, int sum1, int sum2) {
    if(idx == arr.size()) {
        if(sum1 == sum2) {
            for(int i = 0; i < g1.size(); i++) {
                cout << g1[i] << " ";
            }
            cout << "and ";
            for(int i = 0; i < g2.size(); i++) {
                cout << g2[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    g1.push_back(arr[idx]);
    printWays(idx + 1, arr, g1, g2, sum1 + arr[idx], sum2);
    g1.pop_back();

    g2.push_back(arr[idx]);
    printWays(idx + 1, arr, g1, g2, sum1, sum2 + arr[idx]);
    g2.pop_back();
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];

    vector<int> g1, g2;
    printWays(0, arr, g1, g2, 0, 0);

    int totalWays = countWays(0, arr, 0, 0);
    cout << totalWays << endl;

    return 0;
}
