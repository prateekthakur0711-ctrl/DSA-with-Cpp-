#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a, string b) {
    return (a + b) > (b + a);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string arr[105]; 

        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (!compare(arr[j], arr[j + 1])) {
                    string temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }


        if (arr[0] == "0") {
            cout << "0" << endl;
            continue;
        }

        for (int i = 0; i < n; ++i)
            cout << arr[i];
        cout << endl;
    }
    return 0;
}
