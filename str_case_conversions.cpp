#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string toLowerCase(string s2lVar) { // function to convert to all lower case
    for (int i=0; i<s2lVar.length(); i++) { // looping through the string
        if (int(s2lVar[i]) > 64 && int(s2lVar[i]) < 91) // check if its upper case letter
            s2lVar[i] = char(int(s2lVar[i])+32); // replace the character with its lower case version
    }
    return s2lVar; // return all lower case string
}

string toUpperCase(string s2uVar) { // function to convert to all upper case
    for (int i=0; i<s2uVar.length(); i++) { // looping through the string
        // check if its upper case letter and replace the character with its upper case version, if not
        s2uVar[i] = (int(s2uVar[i]) > 96 && int(s2uVar[i]) < 123) ? char(int(s2uVar[i])-32) : s2uVar[i];
    }
    return s2uVar; // return all upper case string
}

string toCamelCase(string s2cVar) { // function to convert first letter to upper case and rest lower case
    // check if the first letter is upper case letter and replace the character with its upper case version, if not
    s2cVar[0] = (int(s2cVar[0]) > 96 && int(s2cVar[0]) < 123) ? char(int(s2cVar[0])-32) : s2cVar[0];
    for (int i=1; i<s2cVar.length(); i++) { // looping through the rest of the string
        // check if its lower case letter and replace the character with its lower case version, if not
        s2cVar[i] = (int(s2cVar[i]) > 64 && int(s2cVar[i]) < 91) ? char(int(s2cVar[i])+32) : s2cVar[i];
    }
    return s2cVar; // return camel case string
}

int main() {
    string userStr;
    cout << "Enter any string: " << endl;
    cin >> userStr; // input string
    cout << toLowerCase(userStr) << endl; // call toLowerCase() function
    cout << toUpperCase(userStr) << endl; // call toUpperCase() function
    cout << toCamelCase(userStr) << endl; // call toCamelCase() function
}