#include <iostream>
using namespace std;

int main (){

	char ch;
	ch = 'N';

	
	switch(ch){
	case 'N':
		cout << "North\n";
		break;
	case 'S':
		cout << "South\n";
		break;
    case 'W':
		cout << "West\n";
		break;
	case 'E':
		cout << "East\n";
		break;
	default:
		cout << "Invalid Input\n";
				
	}  
	  return 0;
}