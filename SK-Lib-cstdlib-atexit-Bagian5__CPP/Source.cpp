#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

void atexit_handler_1() {
    std::cout << "at exit #1\n";
}

void atexit_handler_2() {
    std::cout << "at exit #2\n";
}

int main() {
    const int result_1 = std::atexit(atexit_handler_1);
    const int result_2 = std::atexit(atexit_handler_2);

    if ((result_1 != 0) || (result_2 != 0)) {
        std::cerr << "Registration failed\n";
        return EXIT_FAILURE;
    }

    std::cout << "returning from main\n";

    _getch();
    return 0;
}