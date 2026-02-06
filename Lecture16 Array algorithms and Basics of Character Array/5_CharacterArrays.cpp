#include <iostream>
using namespace std;

int main (){
	//char a[6] = 'Hello';

    // char[100] = "Hello World";

    char a[1000];
    //cin >> a;
    //String is a set of characters terminated by NULL character
    // cin.getline(a, no_of_characters, delimiter_Character)
    // Default delimiter character is : '\n'
    cin.getline(a, 5); // This will help you read the string with whitespace characters.

    cout << a << endl;
    
	  return 0;
}