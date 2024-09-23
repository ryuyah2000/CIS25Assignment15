// Prints out stars
// code by Ryuya Hirota

#include <iostream>
#include <string>

int main() {
    int rows;
    std::cout << "How many rows? ";
    std::cin >> rows;
    
    // creating a string for each row method
    for (int i = 0; i < rows; ++i) {
        std::cout << std::string(i, '*') << std::endl;
    }
    
    // nested for loop method
    /*for (int i = 1; i <= rows; ++i) {
        for (int j = 0; j < i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }*/

    return 0;
}
