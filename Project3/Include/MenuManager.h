//
// Created by Bryce Schultz on 12/6/23.
//

#include "InputHandler.h"
#include "FileWriter.h"
#include "FileReader.h"
#include "Interface.h"


#ifndef PROJECT3_MENUMANAGER_H
#define PROJECT3_MENUMANAGER_H

#endif //PROJECT3_MENUMANAGER_H

class MenuManager {
private:
    ItemTracker tracker;
    Interface interface;
    InputHandler inputHandler;
    std::string wordToSearch;
public:
    void initialSetup();

    [[noreturn]] void displayMenuAndHandleChoice();
    void handleUserChoice(int choice);
    void handleItemSearch();
    void handleDisplayAllItems();
    void handleDisplayHistogram();
    void handleExit();
    void handleInvalidOption();
};