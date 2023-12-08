//
// Created by Bryce Schultz on 12/6/23.
//

#include "../Include/MenuManager.h"
#include "iostream"

/**
 * Executes the initial setup for the menu manager.
 * This setup involves reading input from a file, handling any errors, and writing output to a file.
 */
void MenuManager::initialSetup() {
    // MenuManager.cpp
    bool result;
    do {
        result = FileReader::readInputFile("../Input/CS210_Project_Three_Input_File.txt", tracker);
        if (!result) {
            std::cout << "Unable to open CS210_Project_Three_Input_File.txt. Would you like to retry? (Y/N): ";
            char choice;
            std::cin >> choice;
            if (choice != 'Y' && choice != 'y') {
                std::cerr << "Exiting program due to file read error." << std::endl;
                exit(1); // Exit the program or handle it accordingly
            }
        }
    } while (!result);
    FileWriter::writeOutputFile("frequencies.dat", tracker.getAllFrequencies());
}

/**
 * Displays the menu and handles the user's choice.
 *
 * This function continuously displays the menu using the Interface class
 * and prompts the user for their choice. The user's choice is then passed
 * to the handleUserChoice function for further processing.
 *
 * @note This function does not return.
 *
 * @see Interface, handleUserChoice
 */
[[noreturn]] void MenuManager::displayMenuAndHandleChoice() {
    while (true) {
        Interface::displayMenu();
        int choice = inputHandler.getIntegerInput("Choice: \n");
        handleUserChoice(choice);
    }
}

/**
 * @class MenuManager
 * @brief Class for managing the menu and user choices
 *
 * This class is responsible for managing the menu and handling user choices.
 * It provides functions to handle various user choices such as searching for items,
 * displaying all items, displaying item frequency histogram, exiting the program,
 * and handling invalid options.
 */
void MenuManager::handleUserChoice(int choice) {
    switch (choice) {
        case 1:
            handleItemSearch();
            break;
        case 2:
            handleDisplayAllItems();
            break;
        case 3:
            handleDisplayHistogram();
            break;
        case 4:
            handleExit();
            break;
        default:
            handleInvalidOption();
    }
}

/**
 * @brief Handles the item search functionality.
 *
 * This function prompts the user to enter a word to search for. Then it calls
 * the `getStringInput` function of the `inputHandler` object to retrieve the
 * user input. The entered word is stored in the `wordToSearch` member variable.
 *
 * Finally, it calls the `displayItemFrequency` function of the `interface` object,
 * passing in the `wordToSearch` and the frequency of the word obtained from the
 * `getItemFrequency` function of the `tracker` object.
 *
 */
void MenuManager::handleItemSearch() {
    wordToSearch = inputHandler.getStringInput("Enter word to count: \n");
    interface.displayItemFrequency(wordToSearch, tracker.getItemFrequency(wordToSearch));
}

/**
* @brief Handles the action of displaying all items.
*
* This function retrieves all frequencies from the ItemTracker object and
* passes them to the Interface object for display.
*/
void MenuManager::handleDisplayAllItems() {
    interface.displayAllItems(tracker.getAllFrequencies());
}

/**
 * @brief Handles the action of displaying a histogram of item frequencies.
 *
 * This function calls the `displayHistogram()` function of the `interface` object,
 * passing the result of the `getAllFrequencies()` function of the `tracker` object as the parameter.
 * It displays a histogram of the frequencies of all items.
 *
 * @see Interface::displayHistogram()
 * @see ItemTracker::getAllFrequencies()
 */
void MenuManager::handleDisplayHistogram() {
    interface.displayHistogram(tracker.getAllFrequencies());
}

/**
 * @brief Handles the exit functionality of the menu.
 *
 * This function is called when the user chooses to exit the menu. It terminates the program by calling the `exit()` function with an exit status of 1.
 */
void MenuManager::handleExit() {
    exit(1);
}

/**
 * @brief Handles the case when an invalid option is selected by the user.
 *
 * This function prints an error message indicating that the selected option is invalid
 * and prompts the user to try again.
 *
 * @note This function is a member of the MenuManager class.
 *       It does not return any value.
 *
 */
void MenuManager::handleInvalidOption() {
    std::cout << "Invalid option. Please try again.\n";
}
