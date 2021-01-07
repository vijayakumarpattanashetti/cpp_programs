#include <iostream>

using namespace std;

float calculatePrice(float cost, float disc) { // function to calculate net price
    float net;
    disc = disc / 100;
    net = cost - (cost * disc); // SP = CP - (CP * Discount)
    return net; // return net price
}

int main() {
    float costPrice, sellingPrice, discount;
    cout << "Enter the MRP: " << endl;
    cin >> costPrice;
    cout << "Enter the dicount between 0 - 100: " << endl;
    cin >> discount;
    while (discount > 100 || discount < 0)
    {
        cout << "Enter the discount between 0 - 100: " << endl;
        cin >> discount;
    }
    sellingPrice = calculatePrice(costPrice, discount); // call function
    cout << "The net price is Rs. "<< sellingPrice << endl;
}