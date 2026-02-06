#include <iostream>
using namespace std;

long long n;

void func(long long num){
    if (num > n) return;
    cout << num << " ";

    for (int i = 0; i <= 9; i++)
    {
        long long next = num * 10 + i;
        if (next > n) break;
        func(next);
    }
}

int main() {   

    cin >> n;
    if (n < 0) return 0;
    cout << 0 << " ";
    for (int i = 1; i <= 9; i++){
        if (i > n) break;
        func(i);
    }
                 
    return 0;
}