//
// Created by Bryce Schultz on 12/6/23.
//
#include "../Include/InputHandler.h"
#include "iostream"

std::string InputHandler::getStringInput(const std::string& prompt) {
    std::string value;
    bool validInput = false;

    while (!validInput) {
        std::cout << prompt;
        if (std::cin >> value) {
            validInput = true;
        } else {
            std::cin.clear(); // Clear the error state.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the invalid input.
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        }
    }

    return value;
}

int InputHandler::getIntegerInput(const std::string& prompt) {
    int value;
    bool validInput = false;

    while (!validInput) {
        std::cout << prompt;
        if (std::cin >> value) {
            validInput = true;
        } else {
            std::cin.clear(); // Clear the error state.
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the invalid input.
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
        }
    }
    return value;
}
