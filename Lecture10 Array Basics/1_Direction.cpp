#include <iostream>
using namespace std;

int main (){

    char ch;
    int x = 0, y = 0;

    ch = cin.get();
    while (ch != '\n'){

    	if (ch == 'N') y++;
    	else if (ch == 'S') y--;
    	else if (ch == 'E') x++;
    	else x--;

    	ch = cin.get();
    }

    if (x >= 0 and y >= 0){ // 1st quadrant
      // x times 'E' and y times 'N'
    	for ( int i = 0; i < x; ++i)
    	{
    		cout << 'E';
    	}
    	for ( int i = 0; i < y; ++i)
      {
        cout << 'N';
      }
    }
      else if (x <= 0 and y >= 0){ //2nd quadrant
      // |x| times 'W' and y times 'N'
        x *= -1; // make x +ve
        for ( int i = 0; i < x; ++i)
      {
        cout << 'W';
      }
      for ( int i = 0; i < y; ++i)
      {
        cout << 'N';
      }
    }
     else if (x <= 0 and y <= 0){//3rd quadrant
      // |x| times 'W' and |y| times 'S'
      x *= -1; // make both x and y +ve
      y *= -1;
       for ( int i = 0; i < x; ++i)
      {
        cout << 'W';
      }
      for ( int i = 0; i < y; ++i)
      {
        cout << 'S';
      }
    }
    else { // 4th quadrant
     // x time 'E' and |y| time 'S'
      for ( int i = 0; i < x; ++i)
      {
        cout << 'E';
      }
      y *= -1;
      for ( int i = 0; i < y; ++i)
      {
        cout << 'S';
      }
    }
	  
	  return 0;
}