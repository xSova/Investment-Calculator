//
// Created by Bryce Schultz on 11/19/23.
//

#include <gtest/gtest.h>
#include "../include/InputHandler.h"
TEST(InputHandlerTest, GetDoubleInputValid) {
    std::istringstream input("3.14");
    std::cin.rdbuf(input.rdbuf());  // Redirect cin to use the string stream

    double result = InputHandler::getDoubleInput("Enter a double: ");
    EXPECT_DOUBLE_EQ(3.14, result);
}

TEST(InputHandlerTest, GetDoubleInputInvalid) {
    std::istringstream input("not_a_double");
    std::cin.rdbuf(input.rdbuf());

    // Redirect cout to capture the error message
    std::stringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());

    double result = InputHandler::getDoubleInput("Enter a double: ");
    EXPECT_TRUE(std::cin.fail());  // Check if cin is in a fail state
    EXPECT_EQ(0.0, result);  // Ensure the result is 0.0

    std::cout.rdbuf(oldCout);  // Restore cout
    EXPECT_EQ("Invalid input. Please enter a valid double.\n", output.str());
}

TEST(InputHandlerTest, GetIntInputValid) {
    std::istringstream input("42");
    std::cin.rdbuf(input.rdbuf());

    int result = InputHandler::getIntInput("Enter an integer: ");
    EXPECT_EQ(42, result);
}

TEST(InputHandlerTest, GetIntInputInvalid) {
    std::istringstream input("notAnInteger");
    std::cin.rdbuf(input.rdbuf());

    std::stringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());

    int result = InputHandler::getIntInput("Enter an integer: ");
    EXPECT_TRUE(std::cin.fail());
    EXPECT_EQ(0, result);

    std::cout.rdbuf(oldCout);
    EXPECT_EQ("Invalid input. Please enter a valid integer.\n", output.str());
}
