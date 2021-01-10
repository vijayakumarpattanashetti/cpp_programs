#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define len(arr)(sizeof(arr)/sizeof(*arr)) // macro to find length of an array

int main() {
    // Create or Use inbuilt function which accepts array of products and returns the total of all products in an array :

	// map<string, string> PrdJryVar[] = {
	// 		{{"UidVak","Aid"}, {"NamVak","Mug"}, {"NumVak","449"}},
	// 		{{"UidVak","Bid"}, {"NamVak","Jug"}, {"NumVak","549"}},
	// 		{{"UidVak","Cid"}, {"NamVak","Rug"}, {"NumVak","649"}},
	// 		{{"UidVak","Xid"}, {"NamVak","Pug"}, {"NumVak","849"}}
	// 	};

	// var OptVar = 2496

    map<string, string> PrdJryVar[] = {
			{{"UidVak","Aid"}, {"NamVak","Mug"}, {"NumVak","449"}},
			{{"UidVak","Bid"}, {"NamVak","Jug"}, {"NumVak","549"}},
			{{"UidVak","Cid"}, {"NamVak","Rug"}, {"NumVak","649"}},
			{{"UidVak","Xid"}, {"NamVak","Pug"}, {"NumVak","849"}}
		};

    int prodSumVar = 0; // initialize
	for (int i=0; i<len(PrdJryVar); i++) { // looping through dictionary
        prodSumVar += stoi(PrdJryVar[i]["NumVak"]); // add to previous sum
    }

    cout << prodSumVar << endl; // print sum of values
}
