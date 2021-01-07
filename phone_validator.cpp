#include <iostream>

using namespace std;

bool valPhone(string userPhone) { // function to validate phone number
    for(int i=0;i<10;i++) { // looping through the phone number
    // check if all the characters are digits
       if(int(userPhone[i])<48 || int(userPhone[i])>57) //48 and 57 are ASCII values of 0 and 9, respectively
          return false;
    }
    return userPhone.length() == 10 && userPhone[0] > '5'; // returns true if length of mobile is 10 with first digit greater than 5
}

int main() {
    string phoneNum;
    cout << "Enter Phone Number: "<< endl;
    cin >> phoneNum;
    while (!valPhone(phoneNum)) { // call function to validate phone number till found valid
        cout << "Invalid. Try again: "<< endl;
        cin >> phoneNum;
    }
    cout << "Thanks for subscribing on " <<phoneNum <<endl;
}