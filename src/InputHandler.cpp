//
// Created by Bryce Schultz on 11/19/23.
//

#include "../include/InputHandler.h"
#include <iostream>

using namespace std;

 double InputHandler::getDoubleInput(const string& t_prompt) {
    double value;
    bool validInput = false;

    while (!validInput) {
        cout << t_prompt;
        if (cin >> value) {
            validInput = true;
        } else {
            cin.clear(); // Clear the error flag.
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input.
            cout << "Invalid input. Please enter a valid double." << endl;
        }
    }

    return value;
}

 int InputHandler::getIntInput(const string& t_prompt) {
    int value;
    bool validInput = false;

    while (!validInput) {
        cout << t_prompt;
        if (cin >> value) {
            validInput = true;
        } else {
            cin.clear(); // Clear the error state.
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input.
            cout << "Invalid input. Please enter a valid integer." << endl;
        }
    }

    return value;
}
