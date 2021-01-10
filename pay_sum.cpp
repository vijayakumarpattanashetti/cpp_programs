#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define len(arr)(sizeof(arr)/sizeof(*arr)) // macro to compute array length

int getPaySumFunc(string queryArrVar[], int arrLenVar) {
	map<string, string> RulWekAryVar[] = {
		{ {"Day", "Mon"}, {"Pay", "1"} }, 
		{ {"Day", "Tue"}, {"Pay", "2"} },
		{ {"Day", "Wed"}, {"Pay", "4"} }, 
		{ {"Day", "Thu"}, {"Pay", "8"} },
		{ {"Day", "Fri"}, {"Pay", "16"} }, 
		{ {"Day", "Sat"}, {"Pay", "32"} },
		{ {"Day", "Sun"}, {"Pay", "64"} }};

	int OptSumVar = 0; // initialize pay sum
	for (int i=0; i<arrLenVar; i++) { // looping through input array
		for (int j=0; j<7; j++) { // looping through dictionary
			if (queryArrVar[i] == RulWekAryVar[j]["Day"]) // check if day is asked
				OptSumVar += stoi(RulWekAryVar[j]["Pay"]); // add to previous sum
		}
    }
	return OptSumVar; // return pay sum
}

int main() {
    // Get the Sum of Pay worked on respective days :

	// RulWekAryVar = {
	// 	{ {"Day", "Mon"}, {"Pay", "1"} }, 
	// 	{ {"Day", "Tue"}, {"Pay", "2"} },
	// 	{ {"Day", "Wed"}, {"Pay", "4"} }, 
	// 	{ {"Day", "Thu"}, {"Pay", "8"} },
	// 	{ {"Day", "Fri"}, {"Pay", "16"} }, 
	// 	{ {"Day", "Sat"}, {"Pay", "32"} },
	// 	{ {"Day", "Sun"}, {"Pay", "64"} }];
	 
	// IptWekAryVar = {"Tue", "Thu", "Sat"};

	// OptSumVar = 42

	string IptWekAryVar[] = {"Tue", "Thu", "Sat"}; // input array
    int arrLen = len(IptWekAryVar); // length of input array

    cout << getPaySumFunc(IptWekAryVar, arrLen) << endl; // print sum of pay
}
