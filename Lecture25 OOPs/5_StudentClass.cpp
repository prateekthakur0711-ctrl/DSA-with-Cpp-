#include <iostream>
#include <cstring>
using namespace std;

/////////////////////// BLUEPRINT ///////////////////////
class Student {
private:
    int marks;   

public:
    char *name;   
    int rollno;  

    // Default Constructor
    Student() {
        name = NULL;
    }

    // Parameterized Constructor 
    Student(char *n, int r, int m) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        rollno = r;
        marks = m;
    }

    // Copy Constructor
    Student(Student &S) {
        name = new char[strlen(S.name) + 1];
        strcpy(name, S.name);
        rollno = S.rollno;
        marks = S.marks;
    }

    // Copy Assignment Operator
    void operator = (Student &S) {
        if (name != NULL) delete []name; 
        name = new char[strlen(S.name) + 1];
        strcpy(name, S.name);
        rollno = S.rollno + 50; 
        marks = S.marks;
    }

    // Setting Marks
    void setMarks(int m) {
        if (m >= 0 && m <= 100) marks = m;
        else marks = 0;
    }

    // Getting marks
    int getMarks() {
        return marks;
    }

    // Setting name
    void setName(char *n) {
        if (name != NULL) delete []name;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Printer
    void print() {
        cout << "Name   : " << name << endl;
        cout << "RollNo : " << rollno << endl;
        cout << "Marks  : " << marks << endl << endl;
    }

    // Destructor
    ~Student() {
        delete []name;
    }
};
/////////////////////// BLUEPRINT ///////////////////////

int main() {

    Student S1;  // default constructor
    S1.setName("AV");
    S1.rollno = 31;
    S1.setMarks(80);

    Student S2("BN", 35, 98);

    Student S3("CK", 39, 55);

    Student S4 = S1;

    S1.print();
    S2.print();
    S3.print();
    S4.print();

    return 0;
}