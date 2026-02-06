#include <iostream>
#include <cstring>
using namespace std;

/////////////////////////// BLUE-PRINT ///////////////////////////
class Car{
public:
	char name[100];         // Data members(all three)
	int price;
	int model;

	// Default Constructor
	Car(){
		cout << "Inside Default Constructor\n";
	}
		
	// Parameterized Constructor
	Car(char *n, int p, int m)
	{
		cout << "Inside Parameterized Constructor\n";		
		strcpy(name, n);
		price = p;
		model = m;
	}


	// Parameterized Constructor - 2
	Car(int p, int m, char *n)
	{
		cout << "Inside Parameterized Constructor-2\n";		
		strcpy(name, n);
		price = p;
		model = m;
	}

	// Copy Constructor: To create new car object using existing car
	Car (Car &X){              // we have to pass it by reference otherwise we will get an infinite recursion
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;	
	}

	// Copy Assignment Operator
	void operator = (Car &X){
		cout << "Inside Copy Assignment Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model + 1111;
	}

	// Destructor Function
	// Tilde Operator
	~Car (){ // objects get deleted in opposite way
		cout << "Deleting Car:  " << name << endl;
	}

    // Print
	void print(){
		cout << "Name   :" << name << endl;
	    cout << "Price  :" << price << endl;
	    cout << "Model  :" << model << endl << endl;
	}
};
/////////////////////////// BLUE-PRINT ///////////////////////////

int main (){

	Car A; // A is an object of class Car

	//A.name = "BMW";  // it wont work like this              // dot operator is used to access data members

	strcpy(A.name, "BMW");
	A.price = 10;
	A.model = 2020;

	char carname[] = "AUDI"; 
	Car B(carname, 20, 2022);
	Car C(30, 2024, "MARUTI");

	// Copy Constructor: To create a new car using
	// 1. Car A = B
	// 2. Car A(B)

	Car D = A;

	// Copy Assignment Operator
	D = C; // Updating the data of existing car

/*
	Car B;

	strcpy(B.name, "AUDI"); 			lengthy way to input data
	A.price = 20;
	A.model = 2022;
*/

/*
    cout << "Name     :" << A.name << endl;
	cout << "Price    :" << A.price << endl;   manual way to print
	cout << "Model    :" << A.model << endl;
*/	
	A.print();
	B.print();
	C.print();
	D.print();

	  return 0;
}