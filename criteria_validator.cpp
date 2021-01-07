#include <iostream>

using namespace std;

int main() {
    float Engg_CGPA;
    cout << "Enter your Engg CGPA:\n";
    cin >>Engg_CGPA;

    // nested if
    // check for eligibility of a candidate for roles based on Engg CGPA and aptitude score cut-off
    if (Engg_CGPA>6)
    {
        float AptitudeScore;
        cout << "Enter your Aptitude Score:\n";
        cin >>AptitudeScore;
        if (AptitueScore>85)
            cout<<"Eligible for 100+ roles."<<endl;
        else if (AptitudeScore>65)
            cout<<"Eligible for less roles."<<endl;
        else
            cout<<"Eligible for very few roles."<<endl;
    }
    else
        cout<<"No roles available.";
}