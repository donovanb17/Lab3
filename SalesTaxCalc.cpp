#include <iostream>
    int main() {
        const double tax = 0.075;
        double price;

        std::cout << "Enter the price of this item: ";
        std::cin >> price;
        double salestax = price * tax;
        double totalcost = price + salestax;

        std::cout << "Original Price: $" << price << std::endl;
        std::cout << "Sales Tax: $" << salestax << std::endl;
        std::cout << "Total Cost: $" << totalcost << std::endl;

        return 0;









    }