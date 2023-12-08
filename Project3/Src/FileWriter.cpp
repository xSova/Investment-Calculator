//
// Created by Bryce Schultz on 12/6/23.
//
#include "../Include/FileWriter.h"
#include "iostream"
#include "fstream"

void FileWriter::writeOutputFile(const std::string& fileName, const std::map<std::string, int>& frequencies) {
    std::ofstream outputStream;

    outputStream.open(fileName);
    if (!outputStream.is_open()) {
        std::cout << "Error opening output file. \n";
        return;
    }
    for (auto i : frequencies) {
        outputStream << i.first << " " << i.second << std::endl;
    }
}
