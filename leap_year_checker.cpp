#include <iostream>

using namespace std;

bool IsLeapYear(int year) { // function to check if a given year is leap year
    //4, 8, 12, ... are leap years
    if (year%4 == 0) {
        if (year%100 == 0) {
            if (year%400 == 0) //400, 800, 1200, ... are leap years
                return true;
            else               //100, 200, 300, 500, ... are non-leap years
                return false;
        }
        else
            return true;    
    }
    else 
        return false;
}

int main() {
    int year;
    cout << "Enter the year: "<< endl;
    cin >> year;
    bool result = IsLeapYear(year); // call function
    if (result) // if true is returned
        cout << "You entered a leap year. "<< endl;
    else // if false is returned
        cout << "You entered a non-leap year."<< endl;
}