#include <iostream>

using namespace std;

class personCls { // define class
    public: //access specifier
    string name, mobile, email; // member variables

    // define methods or member functions
    void setPersonInfoFunc(string nameVar, string mobileVar, string emailVar) {
        name = nameVar;
        mobile = mobileVar;
        email = emailVar;
    }

    void dispInfoFunc() {
        cout << "Name is : " << name << endl;
        cout << "Mobile is : " << mobile << endl;
        cout << "Email is : " << email << endl;
    }
};

int main() {
    
    // create abstract datatype to store information of a person

    personCls vijayVar, kumarVar; // objects

    // call methods
    vijayVar.setPersonInfoFunc("Vijay P", "784356372658", "agsh@hd.in");
    kumarVar.setPersonInfoFunc("Kumar S", "993645273356", "h5df@plf.com");

    vijayVar.dispInfoFunc(), kumarVar.dispInfoFunc();
}