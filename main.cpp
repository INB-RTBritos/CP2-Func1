#include <iostream>

int main()
{
    float num1, num2;
    char option, continueChoice = 'y';
    do
    {
        do
        {
            std::cout
                << "--- Please Select for Math Solution to use ---\n"
                << "\"+\" Add\n"
                << "\"-\" Subtract\n"
                << "\"x\" Multipliction\n"
                << "\"/\" Division\n"
                << "\n"
                << "Enter Choice: ";
            std::cin >> option;

            std::system("cls");

            switch (option)
            {
            case '+':
                std::cout << "Please input value 1:";
                std::cin >> num1;
                std::cout << "Please input value 2:";
                std::cin >> num2;
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
                break;
            case '-':
                std::cout << "Please input value 1:";
                std::cin >> num1;
                std::cout << "Please input value 2:";
                std::cin >> num2;
                std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
                break;
            case 'x':
                std::cout << "Please input value 1:";
                std::cin >> num1;
                std::cout << "Please input value 2:";
                std::cin >> num2;
                std::cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
                break;
            case '/':
                std::cout << "Please input value 1:";
                std::cin >> num1;
                std::cout << "Please input value 2:";
                std::cin >> num2;
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
                break;
            default:
                std::cout << "User Input Incorrect\n\n";
                break;
                } 
            } while (option != '+' && '-' && 'x' && '/');
        

        std::cout << "Do you want to Continue [y/n]:";
        std::cin >> continueChoice;
    } while (continueChoice == 'y');
        
}
