# CPP07
(C++ templates)
## Grade: 100/100
![cpp07](https://github.com/user-attachments/assets/812d262d-f025-4051-adad-d881d63e4007)

## Overview

This project is divided into three exercises that focus on C++ template programming:

1. **Exercise 00: Start with a few functions**  
   - Implement generic function templates:
     - `swap`: Swaps the values of two given arguments.
     - `min`: Returns the smallest of two arguments. If they are equal, it returns the second one.
     - `max`: Returns the greatest of two arguments. If they are equal, it returns the second one.
   - These functions must work with any type that supports the required comparison operators, and they are defined entirely in header files.

2. **Exercise 01: Iter**  
   - Implement a function template `iter` that takes:
     - The address of an array.
     - The length of the array.
     - A function that will be applied to every element of the array.
   - The template should work with any type of array. The function parameter may be an instantiated function template.

3. **Exercise 02: Array**  
   - Develop a class template `Array` that holds elements of type `T` and provides:
     - A default constructor that creates an empty array.
     - A constructor that takes an unsigned int `n` and creates an array of `n` default-initialized elements.
     - A copy constructor and a copy assignment operator that perform deep copies (modifying one array must not affect its copy).
     - Memory allocation using the `new[]` operator (no preventive allocation).
     - Overloaded subscript operator `[ ]` for element access, which throws an exception if an index is out of bounds.
     - A `size()` member function that returns the number of elements (and does not modify the instance).

## File Structure

- **Makefile**  
  Automates the build process.

- **main.cpp**  
  Contains comprehensive tests for:
  - The function templates (`swap`, `min`, `max`).
  - The `iter` function template.
  - The `Array` class template.

- **whatever.hpp / whatever.h**  
  Contains the implementations for the function templates: `swap`, `min`, and `max`.

- **iter.hpp / iter.h**  
  Contains the implementation of the function template `iter`.

- **Array.hpp** (and optionally **Array.tpp**)  
  Contains the declaration and definition of the class template `Array`.

## How to Compile and Run

***To run the project:***
```bash
cd ex00
make
./executable_filename
```

## What I Learned

**Template Functions & Generic Programming:** I deepened my understanding of how to write generic code in C++ using function templates, allowing operations on any compatible data type.

**Function Templates:** Implementing the iter function taught me how to apply functions generically to elements of an array.

**Class Templates and Memory Management:** Developing the Array class enhanced my skills in dynamic memory allocation, deep copying, and exception handling in a type-safe manner.

**Error Handling:** Incorporating bounds checking in the subscript operator ensured that the class handles invalid accesses gracefully by throwing exceptions.

**Building Robust C++ Programs:** Overall, the project reinforced best practices in C++ design, including template programming, exception safety, and writing maintainable, well-tested code.

## Conclusion
CPP07 was a challenging yet rewarding project that reinforced the power of templates in C++. It provided hands-on experience in creating both function and class templates while ensuring robustness through deep copy semantics and proper error handling. This project has significantly enhanced my skills in generic programming and advanced C++ design.






