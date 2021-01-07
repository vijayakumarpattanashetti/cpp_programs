#include <iostream>

using namespace std;

int main() {
    
    // input = "0110111011110"
    // output = 4

    string iptVar = "0110111011110";
    int counter = 0;
    for (int i=0; i<iptVar.length(); i++) { // looping through the string
        if (iptVar[i] == '1' && iptVar[i+1] == '1') { // check for pairs
            counter++; // count each pair
            i++; // avoid repeatation of previously visited pair
        }
    }
    cout << counter; // number of pairs of 1s
}