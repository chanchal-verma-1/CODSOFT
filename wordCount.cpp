#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int countWordsInFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Error opening file: " << filename << std::endl;
        return 0;
    }

    std::string line;
    int wordCount = 0;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            wordCount++;
        }
    }
     file.close();
    return wordCount;
}

int main() {
    std::string filename;

    std::cout << "Enter the file name: ";
    std::getline(std::cin, filename);

    int wordCount = countWordsInFile(filename);
    std::cout << "Total word count in the file: " << wordCount << std::endl;

    return 0;
}