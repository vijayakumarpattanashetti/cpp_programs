#include <iostream>

using namespace std;

string getSqr(int num) { // function for square pattern

    string patrn = ""; // initialize pattern

    for (int row=0; row<num; row++){ // looping through rows
        for (int col=0; col<num; col++){ // looping through columns
            patrn += "* ";
        }
        patrn += "\n"; // jump to next line
    }
    return patrn; // return square pattern
}

string getTri(int num) { // function for triangle pattern

    string patrn = ""; // initialize pattern

    for (int row=0; row<=num; row++){ // looping through rows
    // looping through columns those results in right-triangular shape by tracing the hypotenuse
        for (int col=0; col<row; col++){
            patrn += "* ";
        }
        patrn += "\n"; // jump to next line
    }
    return patrn; // return triangle pattern
}

int main() {
    
    // input = length
    // output = stars in square and right-triange shapes using the specified length

    int count; // declare length
    cout << "Enter length: \n";
    cin >> count; // get length
    cout << getSqr(count) <<endl<<endl; // print required pattern by direct call to function
    cout << getTri(count) <<endl; // print required pattern by direct call to function
}