#include <iostream>

using namespace std;

class laptopCls { // define class
    public: // access specifier
    
    // declare member variables
    string processor; // intel i3 i5 i7 i9, AMD ryzen 3 5 7
    string RAM; // 8GB/16GB DDR3/DDR4
    string harddisk; // 1TB HDD, 128GB SSD
    float screensize; // 15.6 inch/16 inch
    bool touchscreen; // yes or no
    string brand; // HP/Dell/Lenovo/Acer/Asus

    laptopCls() {} // to handle nil arguments passing
    
    // default function which will be executed when the class is initialized -> constructor
    laptopCls (string processorVar, string RAM_Var, string harddiskVar, 
                    float screensizeVar, bool touchscreenVar, string brandVar) {
        cout << "I am a constructor.\n";
        processor = processorVar;
        RAM = RAM_Var;
        harddisk = harddiskVar;
        screensize = screensizeVar;
        touchscreen = touchscreenVar;
        brand = brandVar;
    }

    void dispInfoFunc() { // method to print passed laptop info
        cout << "Processor \t: " << processor << endl;
        cout << "RAM \t: " << RAM << endl;
        cout << "Harddisk \t: " << harddisk << endl;
        cout << "Screen Size \t: " << screensize << endl;
        cout << "Touch Screen \t: " << (touchscreen ? "Yes":"No") << endl;
        
    }

    string getModelFunc() { // method to print passed laptop info
        return brand + " | " + processor + " | " + RAM + " | " + harddisk + " | " + (touchscreen ? "Touch Screen":"Not touch screen") + " | " + to_string(screensize) + " inches \n";
    }

    // default function which will be executed at the end of the class -> destructor
    ~laptopCls() {
        cout << "I am a destructor.\n";
    }
};

// define child class
class alienWareLaptopCls : public laptopCls { // linking to parent class
    public:
    string GPU; //nvidia rtx 2080

    alienWareLaptopCls  (string processorVar, string RAM_Var, string harddiskVar, 
                    float screensizeVar, bool touchscreenVar, string brandVar, string GPU_Var) {
        processor = processorVar;
        RAM = RAM_Var;
        harddisk = harddiskVar;
        screensize = screensizeVar;
        touchscreen = touchscreenVar;
        brand = brandVar;
        GPU = GPU_Var;
    }

    void dispInfoFunc() { // method to print passed laptop info
        cout << "Processor \t: " << processor << endl;
        cout << "RAM \t: " << RAM << endl;
        cout << "Harddisk \t: " << harddisk << endl;
        cout << "Screen Size \t: " << screensize << endl;
        cout << "Touch Screen \t: " << (touchscreen ? "Yes":"No") << endl;
        cout << "GPU \t: " << GPU << endl;
        
    }
};

int main() {
    
    // create & use children classes

    laptopCls dellVar("Intel i7 10th Gen", "16GB DDR4", "1TB HDD, 128GB SSD", 16, true, "Dell Inspiron");
    cout << dellVar.getModelFunc() << endl; // call function
    dellVar.dispInfoFunc(); // call function
    cout << endl << endl;

    alienWareLaptopCls alienWareVar("i9 10th Gen", "64GB DDR4" ,"8TB HDD, 2TB SSD", 15.6, false, "Dell ALIENWARE M15","Nvidia RTX 2080");
    alienWareVar.dispInfoFunc(); // call function
}