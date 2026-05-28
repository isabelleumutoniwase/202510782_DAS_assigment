#include "notepad.h"

void writeFile(string filename) {

    ofstream file(filename);

    string text;

    cin.ignore();

    cout << "Enter text (type END to stop):\n";

    while(true) {

        getline(cin, text);

        if(text == "END") {
            break;
        }

        file << text << endl;
    }

    file.close();

    cout << "File saved successfully.\n";
}

void readFile(string filename) {

    ifstream file(filename);

    string text;

    if(!file) {
        cout << "File not found!\n";
        return;
    }

    cout << "\n===== FILE CONTENT =====\n";

    while(getline(file, text)) {
        cout << text << endl;
    }

    file.close();
}

void appendFile(string filename) {

    ofstream file(filename, ios::app);

    string text;

    cin.ignore();

    cout << "Enter new text (type END to stop):\n";

    while(true) {

        getline(cin, text);

        if(text == "END") {
            break;
        }

        file << text << endl;
    }

    file.close();

    cout << "Text appended successfully.\n";
}
