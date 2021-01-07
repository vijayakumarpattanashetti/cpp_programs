#include<iostream>

using namespace std;

#define len(arr)(sizeof(arr)/sizeof(*arr)) // define macro to get length of an array

int main() {
    int salaryArrVar[] = {18000, 25000, 37500, 45000, 58000}; // define an array of integer datatypes

    // print each element of an array
    for (int i=0; i<len(salaryArrVar); i++) {
        cout << salaryArrVar[i] << endl;
    }

    string nameArrVar[] = {"Alice", "Bob", "Charlie", "Dev", "Erin"}; // define an array of string datatypes
    
    for (int i=0; i<len(nameArrVar); i++) {
        cout << "Hello " + nameArrVar[i] + ",\nYour a/c has been credited with your salary amount of Rs. " << salaryArrVar[i] << endl;
    }
}