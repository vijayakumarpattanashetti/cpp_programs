#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define len(arr)(sizeof(arr)/sizeof(*arr)) // define macro to get length of an array

int main() {

    map<string, string> nameArrVar {
        {"School", "Alice"},
        {"PU", "Bob"},
        {"Engg", "Erin"}
    };

    // CRUD operations: Create, Read, Update, Delete
    nameArrVar["Training"] = "Dev"; // create operation: add a key and corresponding value

    nameArrVar["Engg"] = "Rocky"; // update operation: upadte a value for a key

    nameArrVar.erase("PU"); // delete operation: delete a value for a key

    // read operation: read all keys and corresponding values
    for (map<string, string>::iterator i=nameArrVar.begin(); i!=nameArrVar.end(); i++) {
        cout << i->first << endl; // keys
        cout << i->second << endl; // values
    }
}