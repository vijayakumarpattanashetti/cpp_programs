#include <iostream>
using namespace std;

string getEquTri(int num) { // function that returns string datatype
    // first star starts at natural odd index if length is odd
    // first star starts at natural even index if length is even
    int offset = 1;
    if (num%2)
        offset++;
    
    string patrn = ""; // initialize pattern
    for (int row=offset; row<num+offset; row++) { // looping through rows
        for (int col=0; col<2*num; col++) { // looping through twice the columns
        // tracing all cells that are part of the three sides of the equilateral triangle
            if ((col + row <= num-1 || col - row >= num-1 || (row+col)%2))
                patrn += " ";
            else
                patrn += "*";
        }
        patrn += "\n"; // jump to next line
    }
    return patrn; // return equilateral triangle pattern
}

int main(){
    
    // input = length
    // output = equilateral triangle of stars (*)
    //    *
    //   * *
    //  * * *

    int count; // declare length
    cout << "Enter length: \n";
    cin >> count; // get length
    cout << getEquTri(count) <<endl; // print required pattern by direct call to function
}