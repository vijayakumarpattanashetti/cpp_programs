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

    nameArrVar["Training"] = "Dev"; // add a key and corresponding value

    for (map<string, string>::iterator i=nameArrVar.begin(); i!=nameArrVar.end(); i++) {
        cout << i->first << endl; // keys
        cout << i->second << endl; // values
    }

    cout << nameArrVar["PU"] << endl; // access value using the key
}