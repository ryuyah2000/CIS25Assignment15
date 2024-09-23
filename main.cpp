// Prints out stars
// code by Ryuya Hirota

#include <iostream>
#include <string>

int main() {
    int rows;
    std::cout << "How many rows? ";
    std::cin >> rows;
    
    for (int i = 0; i < rows; ++i) {
        std::cout << std::string(i, '*') << std::endl;
    }

    return 0;
}
