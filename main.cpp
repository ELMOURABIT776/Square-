#include <iostream>
#include <iomanip>

int main() {
    int n;


    std::cout << "Enter the upper limit: ";
    std::cin >> n;


    std::cout << std::setw(10) << "Number"
              << std::setw(10) << "Square"
              << std::setw(10) << "Cube" << std::endl;


    for (int i = 1; i <= n; ++i) {
        int square = i * i;
        int cube = i * i * i;


        std::cout << std::setw(10) << i
                  << std::setw(10) << square
                  << std::setw(10) << cube << std::endl;
    }

    return 0;
}

