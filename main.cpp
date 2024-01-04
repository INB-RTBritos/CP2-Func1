#include <iostream>

int MainMenu();
int operation();

int main()
{
    float num1, num2;
    char choice, continueChoice = 'y';
    do
    {
        do
        {
            switch (MainMenu())
            {
            case 1:
                Addition();
                break; 
            case 2:
                Subtraction();
                break; 
            case 3:
                Multiplication();
                break; 
            case 4:
                Division();
                break;        
            default:
                std::cout << "User Input Incorrect\n\n";
                break;
                } 
            } while (choice < 0 || choice > 5);
            std::cout << "Do you want to Continue [y/n]:";
            std::cin >> continueChoice;
    } while (continueChoice == 'y'); {
        exit(0);
    }  
}

int MainMenu(){
    char option;
    std::cout
                << "--- Please Select for Math Solution to use ---\n"
                << "1. Add\n"
                << "2. Subtract\n"
                << "3. Multipliction\n"
                << "4. Division\n"
                << "\n"
                << "Enter Choice: ";
            std::cin >> option;
    
    return option;
}

int Addition(){
    int num1, num2;
                std::cout << "Please input value 1:";
                std::cin >> num1;
                std::cout << "Please input value 2:";
                std::cin >> num2;
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
    return num1+num2;
}

int Subtraction(){
    int num1, num2;
                std::cout << "Please input value 1:";
                std::cin >> num1;
                std::cout << "Please input value 2:";
                std::cin >> num2;
                std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
    return num1-num2;
}

int Multiplication(){
    int num1, num2;
                std::cout << "Please input value 1:";
                std::cin >> num1;
                std::cout << "Please input value 2:";
                std::cin >> num2;
                std::cout << num1 << " x " << num2 << " = " << num1 * num2 << "\n";
    return num1 * num2;
}

int Division(){
    int num1, num2;
                std::cout << "Please input value 1:";
                std::cin >> num1;
                std::cout << "Please input value 2:";
                std::cin >> num2;
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
    return num1 / num2;
}
