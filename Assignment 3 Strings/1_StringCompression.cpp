#include <iostream>
#include <cstring>
using namespace std;

void stringcompress(char a[])
{
    int len = strlen(a);
    int cnt = 1;

    for (int i = 0; i < len; ++i)
    {
        if (a[i] == a[i + 1])
            cnt++;
        else
        {
            cout << a[i] << cnt;
            cnt = 1;
        }
    }
}

int main()
{
    char ch[1001];  
    cin >> ch;

    stringcompress(ch);

    return 0;
}
