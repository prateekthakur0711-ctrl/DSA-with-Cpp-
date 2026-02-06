#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;  

    int a[N];  
    int count0 = 0, count1 = 0;

    for (int i = 0; i < N; ++i) {
        cin >> a[i];

        if (a[i] == 0)
            count0++;
        else if (a[i] == 1)
            count1++;
        else {
            return 0;
        }
    }

    for (int i = 0; i < count0; ++i) {
        cout << "0 ";
    }

    for (int i = 0; i < count1; ++i) {
        cout << "1 ";
    }

    cout << endl;

    return 0;
}

