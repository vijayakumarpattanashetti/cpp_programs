#include <iostream>

using namespace std;

string parseName(string name) { // function to parse name
    string parsedName = ""; // initialize parsed string
    for (int i=0; i<name.length()-1;i++) { // looping through the name string till the last but one character
        parsedName = parsedName + name[i] + "-"; // insert "-" between two consecutive characters, and add to the previous
    }
    return parsedName + name[name.length()-1]; // return concatenated string of parsed name till last but one character and last character of the name
}

int main() {

    // input = "Vijayakumar"
    // output = "V-i-j-....."

    string name;
    cout<< "Enter your name: " <<endl;
    cin>>name;
    cout<< parseName(name) <<endl; // call function
}