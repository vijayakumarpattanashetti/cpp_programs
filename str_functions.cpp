#include<iostream>

using namespace std;

int main() {
    string s1, s2;
    cout << "Enter string (s1): \n";
    cin >> s1;
    cout << "Enter string (s2): \n";
    cin >> s2;
    cout << "Concatenation of strings: \t" << s1.append(s2) << ". \tNow s1 = s1 + s2." << endl;
    cout << "s2 == s2: \t" << s2.compare(s2) << endl;
    cout << "Length of s1: \t" << s1.size() << endl;
    cout << "Get 3rd character in s1: \t" << s1.at(3) << endl;
    cout << "Create an empty string: \t" << string() << endl;
    cout << "Check if previous string is empty: \t" << string().empty() << endl;
    cout << "s2 string capacity is " << s2.capacity() << endl;
    cout << "Length of s2: \t" << s2.length() << endl;
    cout << "Find \"a\" in s1: \t" << s1.find("ku") << endl;
    cout << "Assign \"Hello\" to s2: \t" << s2.assign("Hello") << endl;
    cout << "s1 begins with " << *s1.begin() << endl;
    cout << "s1 ends with " << *(s1.end()-1) << endl;
    swap(s1, s2);
    cout << "Swap s1 <--> s2: \t" << s1  << "\t" << s2 << endl;
    cout << "Delete all characters after index 2 in s1: \t" << s1.erase(2) << endl;
    cout << "Delete 5 characters next to index 5 in s2: \t" << s2.erase(5,5) << endl;
}