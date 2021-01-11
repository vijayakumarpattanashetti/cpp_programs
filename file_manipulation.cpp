#include<iostream>
#include<cstring>

using namespace std;

void readFileFunc(FILE *fileVar) { // function to read the file
    char idxVar=0; // initialize the index to start reading
    while ((idxVar = fgetc(fileVar)) != EOF) // check if the character is last one
		cout << idxVar; // print character by character
    fclose(fileVar); // close the file
}

string writeAppendFileFunc(FILE *fileVar) { // function to create or edit the file
    string userStr;
    cout << "Enter text: \n";
    cin >> userStr; // text to be written or appended
    userStr = userStr + "\n"; // move cursor to next line
    for (int i=0; i<userStr.length(); i++) // looping through the text/content/string
        fputc(userStr[i], fileVar); // write the text into the file
    fclose(fileVar); // close the file
    return "Successfully saved.\n"; // return the success status
}

string deleteFileFunc(FILE *fileVar, string fileNameVar) { // function to delete the file
    fclose(fileVar); // close the file first, if opened
    remove(fileNameVar.c_str()); // delete the requested file
    return "Successfully deleted.\n"; // return the success status
}

int main() {
    FILE *userFile; // pointer to file variable
    char idxVar=0; // index variable
    string fileName, openMode;
    cout << "Enter file Name:\n";
    cin >> fileName; // file name with extension, and path if different
    cout << "Enter file mode (for e.g., \"r\" tp read, \"w\" to write, \"a\" to append, and \"d\" to delete): \n";
    cin >> openMode; // file opening mode
    userFile = fopen(fileName.c_str(), openMode == "d" ? "r" : openMode.c_str()); // open file in requested mode
    if (userFile == NULL) { // if file not found
        cout << "File doesn't exist.\n";
    }
    else {
        if (openMode == "w" || openMode == "a") // if requsted to create or edit
            cout << writeAppendFileFunc(userFile) << endl; // call function
        else if (openMode == "d") // if requsted to delete
            cout << deleteFileFunc(userFile, fileName) << endl; // call function
        else // if requsted to read
            readFileFunc(userFile); // call function
    }
}