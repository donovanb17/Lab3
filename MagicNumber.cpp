#include <iostream>

int main() {

    int favnum;

    std::cout << "Enter your favorite integer: ";
    std::cin >> favnum;

    int result = favnum * 2;
    result = result + 10;
    result = result / 2;
    result = result - favnum;

    std::cout << "Your magic number is: " << result << std::endl;

    return 0;



}