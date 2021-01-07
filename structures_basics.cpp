#include<iostream>
#include<cmath>

using namespace std;

#define print(dispVar)(cout<<dispVar<<endl) // macro

enum direction{North, South, East, West}; // define enum for restricted or desired input options

struct mobile { // define a mobile structure to store its features
    // declare structure variables
    string processor;
    string camera;
};

struct triangle { // define a triangle structure to store its geometric measures
    int height;
    int base;
    triangle(int heightVar, int baseVar) { // default function
        height = heightVar;
        base = baseVar;
        print("I am a structure constructor.");
    }

    int hypotFunc() { // function to compute hypotenuse
        return sqrt(pow(height, 2) + pow(base, 2)); // Pythagoras theorem
    }
};

int main() {
    mobile samsungMobVar; // declare structure variable
    samsungMobVar.processor = "Exynos 990"; // stores mobile's processsor
    samsungMobVar.camera = "108 MP"; // stores mobile's camera
    print(samsungMobVar.processor);
    print(samsungMobVar.camera);

    triangle hypotVar(3, 4); // pass arguments
    int resVar = hypotVar.hypotFunc(); // call function
    print(resVar);

    direction houseDoorVar; // declare enum variable
    houseDoorVar = North; // assign value
    print(houseDoorVar); // spot in enum
}