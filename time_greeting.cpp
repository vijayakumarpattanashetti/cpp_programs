#include <iostream>

using namespace std;

int main() {
    float TimeVar; // declare time variable
    cout << "Enter time in 24 hrs. format: \n";
    cin >> TimeVar; // get time
    // if-else ladder
    if (TimeVar < 0 || TimeVar > 24) // invalid time format
        cout << "Sorry, you entered invalid time. \n";
    else if (TimeVar < 12) // morning
        cout << "Good Morning\n";
    else if (TimeVar < 17) // afternoon
        cout << "Good Afternoon\n";
    else if (TimeVar < 20) // evening
        cout << "Good Evening\n";
    else // night
        cout << "Good Night\n";   
}