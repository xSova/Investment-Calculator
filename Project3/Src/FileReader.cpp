//
// Created by Bryce Schultz on 12/6/23.
//
// Figure out why the program isn't handling the exception thrown by the FileReader class.
// The file isn't in the directory, so the program should throw an exception and ask the user if they want to retry.
// If the user says no, the program should exit.
#include "../Include/FileReader.h"
#include "iostream"
#include "fstream"

bool FileReader::readInputFile(const std::string& fileName, ItemTracker& tracker) {
    std::ifstream inputStream; // Create input stream
    std::string word;

    inputStream.open(fileName);
    if (!inputStream.is_open()) {
        std::cerr << "Error reading input file: Unable to open file " << fileName << std::endl;
        return false;
    }

    getline(inputStream, word); // Parse received data
    while (!inputStream.fail()) {
        tracker.addItem(word);
        getline(inputStream, word);
    }
    inputStream.close();
    return true;
}
