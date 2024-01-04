#include <iostream>

int main()
{
    float num1, num2;
    char choice, option, continueChoice = 'y';
    do
    {
        do
        {
            std::cout
                << "--- Please Select for Math Solution to use ---\n"
                << "1. Add\n"
                << "2. Subtract\n"
                << "3. Multipliction\n"
                << "4. Division\n"
                << "\n"
                << "Enter Choice: ";
            std::cin >> option;

            std::system("cls");

            switch (option)
            {
            case 1:
                std::cout << "Please input value 1:";
                std::cin >> num1;
                std::cout << "Please input value 2:";
                std::cin >> num2;
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
                break;
            case 2:
                std::cout << "Please input value 1:";
                std::cin >> num1;
                std::cout << "Please input value 2:";
                std::cin >> num2;
                std::cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
                break;
            case 3:
                std::cout << "Please input value 1:";
                std::cin >> num1;
                std::cout << "Please input value 2:";
                std::cin >> num2;
                std::cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
                break;
            case 4:
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
            } while (choice < 0 || choice > 5);
        

        std::cout << "Do you want to Continue [y/n]:";
        std::cin >> continueChoice;
    } while (continueChoice == 'y');{
        exit(0);
    }
}
