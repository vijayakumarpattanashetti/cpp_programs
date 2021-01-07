#include <iostream>

using namespace std;

int main() {
    string NamSrgVar=to_string(21); // integer to string
    cout<< NamSrgVar<<endl;
    int NumVar=stoi("2021"); // string to integer
    cout<<NumVar<<endl;
    long LongVar=stol("1234567890"); // string to long
    cout<<LongVar<<endl;
    float FloatVar=stof("3.9"); // string to float
    cout<<FloatVar<<endl;
    double DouVar=stod("3.95"); // string to double
    cout<<DouVar<<endl;
    long long VeryLongVar=stoll("1234567890123456789"); // string to long long
    cout<<VeryLongVar;

    return 0;
}