
#include <iostream>
#include "notepad.h"

using namespace std;

int main() {

    int choice;
    string filename;

    do {

        cout << "\n===== SIMPLE NOTEPAD =====\n";
        cout << "1. Write File\n";
        cout << "2. Read File\n";
        cout << "3. Append File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice >=1 && choice <=3) {
            cout << "Enter filename: ";
            cin >> filename;
        }

        switch(choice) {

            case 1:
                writeFile(filename);
                break;

            case 2:
                readFile(filename);
                break;

            case 3:
                appendFile(filename);
                break;

            case 4:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}
