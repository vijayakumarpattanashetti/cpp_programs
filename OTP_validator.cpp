#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // generate 6-digit random number as OTP between 111111 to 999999
    srand((unsigned) time(0));
    int OTP_Var = (rand()%888889) + 111111;
    // display OTP
    cout << "Your OTP is "<<OTP_Var<<endl;
    int User_OTP_Var, count=0;

    cout << "Enter your OTP:\n";
    cin >> User_OTP_Var; // get OTP from the user

    while (User_OTP_Var!=OTP_Var && count<3) // give user upto three chances
    {
        cout << "Enter valid OTP:\n"; 
        cin >> User_OTP_Var; // get OTP from the user
        count++; // count attempts
    }
    if (User_OTP_Var == OTP_Var) // if OTPs match
        cout << "Login Success";
    else
        cout << "Wrong OTP. Attempts Exceeded.";
    
}