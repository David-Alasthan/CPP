#include <iostream>

int main () {
        float cel, fah;

        std::cout << "Enter a degree Celsius : ";
        std::cin >> cel;
        fah = 1.8*cel + 32;

        std::cout << "Degree Fahrenheit = " << fah << std::endl;

        return 0;
}