#include <iostream>

using namespace std;

string getHollowTri(int num) { // function for hollow right-triangle pattern
    string patrn = ""; // initialize pattern

    for (int row=0; row<num; row++) { // looping through rows
        for (int col=0; col<num; col++) { // looping through columns
        // tracing rows and columns that are three sides of the right-triangle
            if (row==num-1 || col==0 || row==col)
                patrn += "* ";
            else
                patrn += "  ";
        }
        patrn += "\n"; // jump to next line
    }
    return patrn; // return hollow right-triangle pattern
}

int main() {
    
    // input = length
    // output = hollow right-triangle using stars (*)
    //  *
    //  * *
    //  *   *
    //  * * * *

    int count; // declare length
    cout << "Enter length: \n";
    cin >> count; // get length
    cout << getHollowTri(count) <<endl; // print required pattern by direct call to function
}