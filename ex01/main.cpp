#include <iostream>
#include <string>
#include "iter.hpp"


template <typename T>
void printElement(const T &x)
{
    std::cout << x << std::endl;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intLen = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Iterating over int array:" << std::endl;
    iter(intArray, intLen, printElement<int>);

    std::string strArray[] = {"Hello", "World", "Iter"};
    size_t strLen = sizeof(strArray) / sizeof(strArray[0]);
    std::cout << "\nIterating over string array:" << std::endl;
    iter(strArray, strLen, printElement<std::string>);

    return 0;
}