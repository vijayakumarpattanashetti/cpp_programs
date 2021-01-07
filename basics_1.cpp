#include <iostream> // required for input and output

using namespace std; // required for standard input and output i.e., cin and cout, respectively

int main() { // compulsory for any C++ code, and executed at first
    cout << "Hello world!"<< endl; // string datatype
    cout << 2 << endl; // integer datatype
    cout << 2.5 << endl; // float datatype
    cout << true << endl; //boolean datatype
    cout << "Hello " << 123<< endl;
    char CharVar='a'; // declare char datatype variable and assign initial value
    int IntVar=2; // declare integer datatype variable and assign initial value
    char StrVar[]="Happy New Year"; // array of characters
    cout<< StrVar<<endl; // standard output
    string txt = "My World";
    cout<<txt.length(); // print length of a string

    return 0;
}