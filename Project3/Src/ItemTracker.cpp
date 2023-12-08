//
// Created by Bryce Schultz on 12/6/23.
//
#include "../Include/ItemTracker.h"

std::map<std::string, int> ItemTracker::getAllFrequencies() {
    return itemFrequencies;
}

int ItemTracker::getItemFrequency(const std::string& item) {
    return itemFrequencies.at(item);
}

void ItemTracker::addItem(const std::string& item) {
    if (itemFrequencies.count(item) > 0) {
        // Key exists
        itemFrequencies.at(item) += 1;
    } else {
        // Key does not exist
        itemFrequencies.insert({item, 1});
    }
}
