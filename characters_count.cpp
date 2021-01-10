#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string getCountFunc(string ipStr, int strLen) { // function to count characters

	map<char, int> OptVar;
	transform(ipStr.begin(), ipStr.end(), ipStr.begin(), ::tolower); // convert to lower case
	for (int i=0; i<strLen; i++) { // looping through input string
		if (ipStr[i] == ' ') // ignore space
			continue;
		else if (OptVar[ipStr[i]]) // check if visited
			OptVar[ipStr[i]]++; // continue count
		else
			OptVar[ipStr[i]] = 1; // initiate count
	}

    string res = "{ "; // add opening parentheses
	for (map<char, int>::iterator i=OptVar.begin(); i!=OptVar.end(); i++) {
        res = res + i->first + ": " + to_string(i->second) + ", "; // keys and values are characters and counts, respectively

    }
	res.erase(res.size()-2); // remove last ", "
    res += " }\n"; // add closing parentheses

    return res; // return resultant string
}

int main() {
    // Count the occurance of each char in string - Ignore Cases and Spaces

	// var IptVar = "Embedded Password"
	// var OptVar = { a: 2, b: 1, d: 4, e: 3, m: 1,  p: 1, r: 1, s: 2, w: 1 }

	string IptVar;
	cout << "Enter string: \n";
	cin >> IptVar; // input string
    int strLenVar = IptVar.length(); // length of input string
    cout << getCountFunc(IptVar, strLenVar) << endl; // call function and print characters count
}
