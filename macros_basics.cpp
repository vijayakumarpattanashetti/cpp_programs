#include<iostream>
using namespace std;

// macros used to define constants
#define userName "Vijay"
#define age 20
#define boolVar true
#define checkEqual(a,b)(a==b?"Yop":"Nop")
#define print(p)(cout << p << endl)

int main() {
    cout << userName << endl;
    cout << age << endl;
    cout << boolVar << endl;
    string resVar = checkEqual("test", "test");
    cout << resVar << endl;
    cout << checkEqual(age, 18) << endl;
    print("Hello World!");
}