#include <iostream>

using namespace std;

class firstCls { // define class
    public: // access specifier
    void firstFunc() { // define method or member function
        cout << "I am a function inside a class. \n";
    }
};

int main() {
    
    // use of class
    firstCls classVar; // declare object
    classVar.firstFunc(); // call method
}