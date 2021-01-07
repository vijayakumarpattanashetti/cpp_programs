#include <iostream>

using namespace std;

string amountWord(long money) { // function to return amount in words
    if (money > 9999999) { // crore
        int cr_multiple = money/10000000;
        return to_string(cr_multiple) + " cr";
    }
    else if (money > 99999 && money < 10000000) { // lakh
        int l_multiple = money/100000;
        return to_string(l_multiple) + " l";
    }
    else if (money > 999 && money < 100000) { // thousand
        int k_multiple = money/1000;
        return to_string(k_multiple) + " k";
    }
    else // none
        return to_string(money);
}

int main() {

    // input = 10000000, 20000000, ..., 100000, 200000, ..., 1000, 2000, ...
    // output = 1 cr, 2r, ..., 1 l, 2l, ..., 1k, 2k, ...

    long amount;
    cout << "Enter the amount: "<< endl;
    cin >> amount;
    string result = amountWord(amount); // call function
    cout << "You entered "<< result<< endl;
}