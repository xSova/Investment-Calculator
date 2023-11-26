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
    // Simulate invalid input followed by valid input
    std::istringstream input("notADouble \n42.0\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::stringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());

    // Call the method to test
    double result = InputHandler::getDoubleInput("Enter a double: ");

    // Restore the cout's original streambuf
    std::cout.rdbuf(oldCout);

    // Check output
    std::string expectedOutput = "Enter a double: Invalid input. Please enter a valid double.\nEnter a double: ";
    EXPECT_EQ(expectedOutput, output.str());

    // Check result
    EXPECT_EQ(42.0, result);
}

TEST(InputHandlerTest, GetIntInputValid) {
    // Redirect cin to use istringstream with our test input
    std::istringstream input("42");
    std::cin.rdbuf(input.rdbuf());

    // Call the method to test
    int result = InputHandler::getIntInput("Enter an integer: ");

    // Check if the result is as expected
    EXPECT_EQ(42, result);
}

TEST(InputHandlerTest, GetIntInputInvalid) {
    // Simulate invalid input followed by valid input
    std::istringstream input("notAnInteger\n42\n");
    std::cin.rdbuf(input.rdbuf());

    // Capture the output
    std::stringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());

    // Call the function under test
    int result = InputHandler::getIntInput("Enter an integer: ");

    // Restore cout's original streambuf
    std::cout.rdbuf(oldCout);

    // Check the output
    std::string expectedOutput = "Enter an integer: Invalid input. Please enter a valid integer.\nEnter an integer: ";
    EXPECT_EQ(expectedOutput, output.str());

    // Check the result
    EXPECT_EQ(42, result);
}

