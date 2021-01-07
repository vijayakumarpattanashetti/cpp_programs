#include <iostream>

using namespace std;

bool valEmail(string userEmail) { // function to validate email address
    int at_idx=0, dot_idx=0, at_cnt=0;
    for(int i=0; i<userEmail.length(); i++) { // looping through email address string
    // check for presence of at("@") and period(".")
        if (userEmail[i] == '@') { //alteratively, if (int(userEmail[i]) == 64) where 64 is ASCII value for @ (at the rate)
            at_idx = i; // get index of "@"
            at_cnt++; // get count of "@"
        }
        else if (userEmail[i] == '.') //alteratively, else if (int(userEmail[i]) == 46) where 64 is ASCII value for . (period)
            dot_idx = i; // get index of "."
    }
    // check for persence of period(".") after "@", and chck for valid count & index of "@"
    if (at_cnt != 1 || at_idx < 3 || dot_idx < at_idx)
        return false; // returns if found invalid
    else
        return true; // returns if found valid
}

int main(){
    string emailAdrs; // declare email address variable
    cout << "Enter email Address:"<< endl;
    cin >> emailAdrs; // get email address
    while (!valEmail(emailAdrs)) { // call function to validate email address till found valid
        cout << "Invalid. Try again: "<< endl;
        cin >> emailAdrs;
    }
    cout << "Thanks for subscribing on "<< emailAdrs << endl;
}