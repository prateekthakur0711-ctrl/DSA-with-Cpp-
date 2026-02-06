#include <iostream>
#include <cstring>
using namespace std;

/////////////////////////// BLUE-PRINT ///////////////////////////
class Car{
private:
	int price;
public:
	char *name;        
	int model;

	// Default Constructor
	Car(){
		name = NULL;
	}
		
	// Parameterized Constructor
	Car(char *n, int p, int m)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
	}


	// Parameterized Constructor - 2
	Car(int p, int m, char *n)
	{
		name = new char[strlen(n) + 1];	
		strcpy(name, n);
		price = p;
		model = m;
	}

	// Copy Constructor
	Car (Car &X){ 
		name = new char[strlen(X.name) + 1];             
		strcpy(name, X.name);
		price = X.price;
		model = X.model;	
	}

	// Copy Assignment Operator
	void operator = (Car &X){
		strcpy(name, X.name);
		price = X.price;
		model = X.model + 1111;
	}

	// Destructor Function
	// Tilde Operator
	~Car (){ // objects get deleted in opposite way
	}

    // Print
	void print(){
		cout << "Name   :" << name << endl;
	    cout << "Price  :" << price << endl;
	    cout << "Model  :" << model << endl << endl;
	}

	void setPrice(int p)
	{
		if (p >= 160 and p < 200) price = p;
		else price = 180;
	}

	int getPrice()
	{
		return price;
	}

	void setname (char *n) {
		if (name != NULL) delete []name;

		name = new  char[strlen(n) + 1];
		strcpy(name, n);
	}
};
/////////////////////////// BLUE-PRINT ///////////////////////////

int main (){

	Car A; // A is an object of class Car

	//strcpy(A.name, "BMW");
	A.setname("BMW");
	//A.price = 10; cannot update as it is private member of class car
	A.setPrice(175);
	A.model = 2020;

	char carname[] = "AUDI"; 
	Car B(carname, 20, 2022);
	Car C(30, 2024, "MARUTI");

	// Copy Constructor: To create a new car using
	// 1. Car A = B
	// 2. Car A(B)

	Car D = A;

	// Copy Assignment Operator
	//D = C; // Updating the data of existing car

    // cout << A.price << endl;
	cout << A.getPrice() << endl;
	A.print();
	B.print();
	C.print();
	D.print();

	  return 0;
}