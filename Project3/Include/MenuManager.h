//
// Created by Bryce Schultz on 12/6/23.
//

#include "InputHandler.h"
#include "FileWriter.h"
#include "FileReader.h"
#include "Interface.h"
#include "ItemTracker.h"

#ifndef PROJECT3_MENUMANAGER_H
#define PROJECT3_MENUMANAGER_H

#endif //PROJECT3_MENUMANAGER_H

class MenuManager {
private:
    ItemTracker tracker;
    Interface interface;
    FileReader fileReader;
    FileWriter fileWriter;
    InputHandler inputHandler;
public:
    void initialSetup();
    void displayMenuAndHandleChoice();
};