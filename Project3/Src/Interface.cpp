//
// Created by Bryce Schultz on 12/6/23.
//
#include "../Include/Interface.h"
#include "iostream"
void Interface::displayMenu() {
    std::cout << std::endl;
    std::cout << "<--------------------------------------->\n";
    std::cout << "Choose an option:\n";
    std::cout << "1. Search for an item.\n";
    std::cout << "2. Display all items and their frequency.\n";
    std::cout << "3. Display histogram of items.\n";
    std::cout << "4. Exit program.\n";
    std::cout << "<--------------------------------------->\n";
}

void Interface::displayItemFrequency(const std::string& item, int frequency) {
    std::string time;
    time = frequency > 1 || frequency == 0 ? " times" : " time";
    std::cout << item << " appears " << frequency << time << ".\n";
}

void Interface::displayAllItems(const std::map<std::string, int>& frequencies) {
    std::cout << "Displaying all items: \n";
    for (const auto& i : frequencies) {
        std::cout << i.first << " " << i.second << std::endl;
    }
}

void Interface::displayHistogram(const std::map<std::string, int>& frequencies) {
    std::cout << "Displaying histogram...\n";
    for (const auto& i : frequencies) {
        std::cout << i.first;
        for (auto j = 0; j < i.second; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}