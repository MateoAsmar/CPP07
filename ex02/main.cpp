#include <iostream>
#include "Array.hpp"

int main() {
    try {
        Array<int> a;
        std::cout << "Default array size: " << a.size() << std::endl;

        Array<int> b(5);
        std::cout << "Array b (size " << b.size() << "): ";
        for (unsigned int i = 0; i < b.size(); i++) {
            b[i] = i * 10;
        }
        for (unsigned int i = 0; i < b.size(); i++) {
            std::cout << b[i] << " ";
        }
        std::cout << std::endl;

        Array<int> c = b;
        std::cout << "Array c (copy of b): ";
        for (unsigned int i = 0; i < c.size(); i++) {
            std::cout << c[i] << " ";
        }
        std::cout << std::endl;

        b[0] = 999;
        std::cout << "After modifying b[0] to 999:" << std::endl;
        std::cout << "b[0]: " << b[0] << ", c[0]: " << c[0] << std::endl;

        Array<int> d(3);
        d = b;
        std::cout << "Array d (assigned from b): ";
        for (unsigned int i = 0; i < d.size(); i++) {
            std::cout << d[i] << " ";
        }
        std::cout << std::endl;

        try {
            std::cout << "Accessing out-of-bounds index: ";
            std::cout << b[10] << std::endl;
        } catch (std::exception &e) {
            std::cout << "Exception caught: index out of bounds" << std::endl;
        }
    } catch (std::exception &e) {
        std::cerr << "Unexpected error: " << e.what() << std::endl;
    }
    return 0;
}