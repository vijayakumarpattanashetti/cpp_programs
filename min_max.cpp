#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// #define len(arr)(sizeof(arr)/sizeof(arr[0])) // define macro to get length of an array

int minMaxFunc(int intArrVar[]) { // function to return an array of minimum and maximum

    int minVar = intArrVar[0], maxVar = intArrVar[0]; // declare and initialize
    for (int i=1; i<5; i++) { // looping through an array
        minVar < intArrVar[i] ? minVar : minVar = intArrVar[i]; // check if minimum and update
        maxVar > intArrVar[i] ? maxVar : maxVar = intArrVar[i]; // check if maximum and update
    }

    int minMaxVar[] = {minVar, maxVar}; // store minimum and maximum in an array

    return minMaxVar; // return an array of minimum and maximum
}

int main() {
    int numArrVar[] = {35,64,23,75,14};
    cout << "Minimum is " << minMaxFunc(numArrVar)[0] << " and Maximum is " << minMaxFunc(numArrVar)[1] << endl; // call function
}