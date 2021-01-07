#include <iostream>

using namespace std;

string getRevTri(int num) { // function for reverse equilateral triangle pattern
    
    string patrn = ""; // initialize pattern
    for (int row=0; row<num; row++) { // looping through rows
        for (int col=0; col<2*num; col++) { // looping through twice the columns
        // tracing all cells that are part of the three sides of the reverse equilateral triangle
            if (col>row && col <= (2*num)-row-1 && (row+col)%2)
                patrn += "*";
            else
                patrn += " ";
        }
        patrn += "\n"; // jump to next line
    }
    return patrn; // return reverse equilateral triangle pattern
}

int main() {
    
    // input = length
    // output = reverse equilateral triangle of stars (*)
    //  * * *
    //   * *
    //    *

    int count; // declare length
    cout << "Enter length: \n";
    cin >> count; // get length
    cout << getRevTri(count) <<endl; // print required pattern by direct call to function
}