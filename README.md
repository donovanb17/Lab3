# Lab3

#include <iostream>

int main() {
    int a = 5, b = 12, c = 2;
    double x = 10.0, y = 3.0;

    std::cout << "Result 1: " << b / a << std::endl;
    std::cout << "Result 2: " << b % a << std::endl;
    std::cout << "Result 3: " << x / y << std::endl;
    std::cout << "Result 4: " << (a + b + c) / y << std::endl;
    std::cout << "Result 5: " << static_cast<double>(b) / a << std::endl;

    return 0;
}


Your Task:
In your README file, answer the following questions (2 pts each):

What will be the exact output for "Result 1"? Why isn't it 2.4?
-> the exact output for "Result 1" is 2 and not 2.4 because we're preforming integer division which in C++ will truncate the remainder.

What will be the exact output for "Result 2"? What does the % operator do?
-> The exact output for "Result 2" is 2 and the % operator calculates the remainder of dividing b and a.

What will be the exact output for "Result 3"?
-> The exact output for "Result 3" is 3.33333


What will be the exact output for "Result 4"?
-> 6.33333

What will be the exact output for "Result 5"? How does static_cast change the calculation?
-> 2.4 and static_cast changes the calculation because we cast b which is an int to be a double if it wasn't static_cast it would be 2 instead of 2.4
