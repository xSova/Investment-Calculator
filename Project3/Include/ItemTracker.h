//
// Created by Bryce Schultz on 12/6/23.
//

#include "string"
#include "map"

#ifndef PROJECT3_ITEMTRACKER_H
#define PROJECT3_ITEMTRACKER_H

#endif //PROJECT3_ITEMTRACKER_H

class ItemTracker {
private:
    std::map<std::string, int> itemFrequencies;
public:
    void addItem(const std::string& item);
    int getItemFrequency(const std::string& item);
    std::map<std::string, int> getAllFrequencies();
};