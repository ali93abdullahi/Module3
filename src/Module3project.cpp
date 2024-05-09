//============================================================================
// Name        : Module3project.cpp
// Author      : Ali Abdullahi
// Version     :
// Copyright   : Your copyright notice
// Description : Module 3 Project
//============================================================================

#include <iostream>
#include <iostream>

int main() {
    int a, b, c; // Variables to hold the input values
    int *pa = nullptr, *pb = nullptr, *pc = nullptr; // Pointers to integers

    // Asking for user input
    std::cout << "Enter three integer values: ";
    std::cin >> a >> b >> c;

    // Allocating memory and assigning the values
    pa = new int(a);
    pb = new int(b);
    pc = new int(c);

    // Displaying the values using variables and pointers
    std::cout << "You entered: " << std::endl;
    std::cout << "a = " << a << ", *pa = " << *pa << std::endl;
    std::cout << "b = " << b << ", *pb = " << *pb << std::endl;
    std::cout << "c = " << c << ", *pc = " << *pc << std::endl;

    // Cleaning up dynamic memory
    delete pa;
    delete pb;
    delete pc;

    // Setting pointers to nullptr after memory is deallocated
    pa = nullptr;
    pb = nullptr;
    pc = nullptr;

    return 0;
}
