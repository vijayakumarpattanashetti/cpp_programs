#include <iostream>

using namespace std;

void NamFnc() { // simple function
    cout<<"I am a function."<<endl;
}

void print(string message) { // function to print string datatype
    cout<<message<<endl;
}

void print(long number) { // function to print long datatype
    cout<<number<<endl;
}

int main() {
  //collection of statements which can be reused is called as a function
  //collection of functions having similar properties is called a class
  //collection of classes is called as a package or module
  //collection of packages is called as a project
  
  // call functions
  NamFnc();
  print("Hello World!");
  print(12345);
  print(1234512345);
}