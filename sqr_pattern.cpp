#include <iostream>

using namespace std;

string drawHollowSqr(int lenVar) { // function for hollow square pattern
    string patrn = ""; // initialize pattern

    for (int row = 0; row < lenVar; row++) { // looping through rows
        for (int col = 0; col < lenVar; col++) { // looping through columns
        // tracing rows and columns that are four sides of the square
            if (row==0 || col==0 || row==lenVar-1 || col==lenVar-1)
                patrn += "* ";
            else
                patrn += "  ";
        }
        patrn += "\n"; // jump to next line
    }
    return patrn; // return hollow square pattern
}

int main() {
    
    // input = length
    // output = square of stars (*) of length x length with center gap of length-1 x length-1
    // * * * *
    // *     *
    // *     *
    // * * * *

    int count; // declare length
    cout << "Enter length: \n";
    cin >> count; // get length
    cout << drawHollowSqr(count) <<endl; // print required pattern by direct call to function
}