//
// Created by Bryce Schultz on 12/6/23.
//

#include "string"
#include "map"

#ifndef PROJECT3_INTERFACE_H
#define PROJECT3_INTERFACE_H

#endif //PROJECT3_INTERFACE_H

class Interface {
public:
    static void displayMenu();
    static void displayItemFrequency(const std::string& item, int frequency);
    static void displayAllItems(const std::map<std::string, int>& frequencies);
    static void displayHistogram(const std::map<std::string, int>& frequencies);
};