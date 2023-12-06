//
// Created by Bryce Schultz on 12/6/23.
//

#ifndef PROJECT3_INTERFACE_H
#define PROJECT3_INTERFACE_H

#endif //PROJECT3_INTERFACE_H

class Interface {
public:
    void displayMenu();
    void displayItemFrequency(const std::string& item, int frequency);
    void displayAllItems(const std::map<std::string, int>& frequencies);
    void displayHistogram(const std::map<std::string, int>& frequencies);
    void displayMessage(const std::string& message);
};