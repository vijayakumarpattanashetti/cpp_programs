#include<iostream>

using namespace std;

class bankAccountCls { // define class
    public:
    // declare member variables
    string IFSC; // bank IFSC code
    string acNum ; // a/c number
    string acType; // a/c type, e.g. savings
    string mobile; // mobile associated with bank a/c
    string bankName; // bank name with branch, e.g. SBI Laxmeshwar
    string acHolderName; // a/c holder exact name
    float balance; // balance in the a/c

    bankAccountCls() {} // to handle nil arguments passing

    // default function which will be executed when the class is initialized -> constructor
    bankAccountCls (string IFSC_Var, string acNumVar, string acTypeVar,
        string mobileVar, string bankNameVar, string acHolderNameVar, float balanceVar) { // set basic bank info
            // cout<<"I am a Constructor. \n" <<endl;
            IFSC = IFSC_Var;
            acNum = acNumVar;
            acType = acTypeVar;
            mobile = mobileVar;
            bankName = bankNameVar;
            acHolderName = acHolderNameVar;
            balance = balanceVar;
    }

    // method to display basic bank info
    void dispInfoFunc() {
        cout << "IFSC \t: " << IFSC << endl;
        cout << "A/C Number \t: " << acNum << endl;
        cout << "A/C Type \t: " << acType << endl;
        cout << "Mobile \t: " << mobile << endl;
        cout << "Bank Name with branch \t: " << bankName << endl;
        cout << "A/C Holder Name \t: " << acHolderName << endl;
        cout << "Balance (Rs.) \t: " << balance << endl;
    }

    // default function which will be executed at the end of the class -> destructor
    // ~bankAccountCls() {
    //     cout << "I am a destructor.\n";
    // }
};

// define child class
class bankBalanceCls : public bankAccountCls { // linking to parent class
    public:

    bankBalanceCls  (string IFSC_Var, string acNumVar, string acTypeVar,
        string mobileVar, string bankNameVar, string acHolderNameVar, float balanceVar) {
        
        IFSC = IFSC_Var;
        acNum = acNumVar;
        acType = acTypeVar;
        mobile = mobileVar;
        bankName = bankNameVar;
        acHolderName = acHolderNameVar;
        balance= balanceVar;
    }

    bankBalanceCls operator+(bankBalanceCls bankAccVar)
    //operator overloading
    {
        bankBalanceCls allBanks;
        allBanks.balance = balance + bankAccVar.balance; // add balance of two banks
        return allBanks; // return net balance
    }

    bankBalanceCls() {}

    void dispInfoFunc() {
        cout << "IFSC \t: " << IFSC << endl;
        cout << "A/C Number \t: " << acNum << endl;
        cout << "A/C Type \t: " << acType << endl;
        cout << "Mobile \t: " << mobile << endl;
        cout << "Bank Name with branch \t: " << bankName << endl;
        cout << "A/C Holder Name \t: " << acHolderName << endl;
        cout << "Balance \t: " << balance << endl;
        
    }

    // method to print net balance
    void dispNetBalFunc() {
        cout << "Your net balance of the two bank accounts is Rs. " << balance << endl;
    }

};

int main() {
    // create bank accounts & display the net balance

    // create & print bank account
    bankAccountCls corpAccVar("856483887834278", "CRPB36583248", "Savings" ,"8455466437", "Corporation Bank Lxr", "PQR", 37000.00);
    corpAccVar.dispInfoFunc();
    cout << endl;

    // create & print first bank account
    bankBalanceCls canaraAccVar("4795792568865388", "CNB43279587", "Savings" ,"9326764774", "Canara Bank Lxr", "ABC", 16380.23);
    canaraAccVar.dispInfoFunc();
    cout << endl;

    // create second bank account
    bankBalanceCls sbiAccVar("238383887834278", "SBIN36583248", "Savings" ,"7655466437", "SBI Lxr", "XYZ", 25000.56);
    
    // get net balance of the two banks
    bankBalanceCls netBal = sbiAccVar + canaraAccVar;
    netBal.dispNetBalFunc(); // print net balance
}