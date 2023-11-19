//
// Created by Bryce Schultz on 11/19/23.
//

#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <string>

class InputHandler {
public:

    // Gets a double value from the user. 'prompt' is the message shown to the user.
    static double getDoubleInput(const std::string& t_prompt);

    // Gets an integer value from the user. 'prompt' is the message shown to the user.
    static int getIntInput(const std::string& t_prompt);
};

#endif // INPUTHANDLER_H

