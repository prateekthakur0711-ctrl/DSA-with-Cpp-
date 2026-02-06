#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cin >> s;

    int n;
    cin >> n;

    while(n--){
        int i, j, k;
        cin >> i >> j >> k;

        i--;
        j--;

        int lenofsubstr = j - i + 1;
        k = k % lenofsubstr;

        while(k--){
            char end = s[j];
            for (int x = j; x > i; x--)
            {
                s[x] = s[x - 1];
            }
            s[i] = end;
        }
    }

    cout << s;


    return 0;
}