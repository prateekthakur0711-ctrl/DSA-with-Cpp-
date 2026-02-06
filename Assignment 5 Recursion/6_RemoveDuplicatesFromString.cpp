#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void removeDuplicates(char a[])
{
    int n = strlen(a);
    int index = 0;

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j])
                break;
        }

        if (j == i) {
            a[index++] = a[i];
        }
    }

    a[index] = '\0'; 
    sort(a, a + index);
}

int main()
{
    char s[100];
    cin >> s;
    removeDuplicates(s);
    cout << s << endl; 
    return 0;
}
