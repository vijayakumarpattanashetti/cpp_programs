#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string formatArrFunc(string ipArr[]) { // function to format given array
    map<string, string> opVar; // initialize dict variable
    for (int i=0; i<6; i++) { // looping through input array
        opVar[ipArr[i]] = ipArr[i+1]; // update operation
        i++; // to avoid duplication
    }
    string res = "{ "; // add opening parentheses
	for (map<string, string>::iterator i=opVar.begin(); i!=opVar.end(); i++) {
        res = res + i->first + " : " + i->second + " , "; // keys and values
    }
	res.erase(res.size()-2); // remove last ", "
    res += "}\n"; // add closing parentheses

    return res; // return desired output
}

int main() {
    string ipArr[] = {"1", "AU", "2", "BU", "3", "CU"}; // input array
    cout << formatArrFunc(ipArr) << endl; // call function and print answer
}