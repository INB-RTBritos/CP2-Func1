// Accept a value and add to the stored value of 1000
// The user want to do continuous transaction until stated to close.
// Exit should exist in both initial and end
// stored

#include <iostream>
using namespace std;

#define splitter() cout << "\n\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^";

int InputValue(int& num){
    cout << "\n\t\tEnter Value: ";
    cin >> num;
    return num;
}

int main() {
    
            int stored = 1000;
            int num, operation;
            char continueChoice = 'y';
            do {
                splitter();
                cout << "\n\t\t        Main Menu       ";
                splitter();
                cout << "\n\t\tPlease Choose an operation";
                cout << "\n\t\t[1] Add";
                cout << "\n\t\t[2] Subtract";
                cout << "\n\t\t[3] Exit";
                cout << "\n\n\t\tEnter Operation: ";
                cin >> operation;
                    
                    switch (operation) {
                        case 1:
                        InputValue(num);
                        stored += num;
                        break;

                        case 2:
                        InputValue(num);
                        stored -= num;
                        break; 

                        case 3:
                        return 0;
                        break;
                    }
                    cout << "\n\n\t\t" << stored;
                    cout << "\n\n\t\tDo you want to continue? [y]/[n] ";
                    cin >> continueChoice;
                    system("cls");
            } while (continueChoice == 'y');
        
}
