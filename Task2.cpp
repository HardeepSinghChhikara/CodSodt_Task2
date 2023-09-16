#include <iostream>

int main() {
    int operation;
    double num1, num2, result;

    // Display a menu of operations
    std::cout << "Welcome to the Basic Calculator!" << std::endl;
    std::cout << "Available operations:" << std::endl;
    std::cout << "1. Addition (+)" << std::endl;
    std::cout << "2. Subtraction (-)" << std::endl;
    std::cout << "3. Multiplication (*)" << std::endl;
    std::cout << "4. Division (/)" << std::endl;

    // Get the user's choice of operation
    std::cout << "Enter the number corresponding to the operation you want to perform: ";
    std::cin >> operation;

    if (operation < 1 || operation > 4) {
        std::cout << "Invalid operation selected." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Get the two numbers from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Perform the selected operation
    switch (operation) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if (num2 == 0) {
                std::cout << "Error! Division by zero is not allowed." << std::endl;
                return 1; // Exit the program with an error code
            }
            result = num1 / num2;
            break;
    }

    // Display the result
    std::cout << "Result: " << num1 << " ";

    // Display the operator based on the user's choice
    switch (operation) {
        case 1:
            std::cout << "+";
            break;
        case 2:
            std::cout << "-";
            break;
        case 3:
            std::cout << "*";
            break;
        case 4:
            std::cout << "/";
            break;
    }

    std::cout << " " << num2 << " = " << result << std::endl;

    return 0;
}
