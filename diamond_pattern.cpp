#include <iostream>

using namespace std;

string getDiamond(int num) { // function that returns string datatype

    //get mid-point
    int mid = (num/2) + 1;

    // first star starts at natural odd index if length is odd
    // first star starts at natural even index if length is even
    // however this is avoided by while loop in the main()
    // in case while loop isn't used, this will increment length to next natural odd number
    int offset = 1;
    if (mid%2)
        offset++;
    
    string patrn = ""; // initialize pattern

    // patterning diamond as a combination of equilateral and reverse equilateral triangles
    
    // equilateral triangle
    for (int row=offset; row<mid+offset; row++) { // looping through half of the rows
        for (int col=0; col<num; col++) { // looping through columns
        // tracing all cells that are part of the three sides of the equilateral triangle
            if ((col + row <= mid-1 || col - row >= mid-1 || (row+col)%2))
                patrn += " ";
            else
                patrn += "*";
        }
        patrn += "\n"; // jump to next line
    }

    // reverse equilateral triangle without base row
    for (int row=1; row<mid; row++) { // looping through one less - half of the rows
        for (int col=1; col<num; col++) { // looping through columns
        // tracing all cells that are part of the three sides of the reverse equilateral triangle, except the base row
            if (col>row && col <= (2*mid)-row-1 && (row+col)%2)
                patrn += "*";
            else
                patrn += " ";
        }
        patrn += "\n";// jump to next line
    }
    return patrn; // return diamond pattern
}

int main() {
    
    // input = length
    // output = equilateral triangle of stars (*)
    //    *
    //   * *
    //  * * *
    //   * *
    //    *

    int count; // declare length
    cout << "Enter length: \n";
    cin >> count; // get length

    // avoiding even numbers
    while (!(count%2)) {
        cout << "Enter only odd numbers: \n";
        cin >> count;
    }
    cout << getDiamond(count) <<endl; // print required pattern by direct call to function
}