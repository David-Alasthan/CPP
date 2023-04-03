#include <iostream>

int main() {
        // std::cout << "Hello World!" << std::endl;

        // bool flag;
        // flag = 5 < 100;
        // if (flag)
        //         std::cout << "5 < 100 is True" << std::endl;
        
        // char ch;

        // ch = 'C';
        // std::cout << ch ;

        // ch = '+';

        // std::cout<< ch << ch << std::endl;

        // std::cout << "lorem kdfire jjjjjjjjd jjjjjjjjjjjjjj as jjjjjjjjjjjj" << std::endl;

        enum days{Sun, Mon, Tue, Wed, Thu, Fri, Sat};

        int choice;

        std::cout << "Enter a day (0 - 6): ";
        std::cin >> choice;
        
        if(choice == Sun || choice == Sat)
                std::cout << "\nIt's a weekend day";
        else
                std:: cout << "\nIt's a week day" << std::endl;

        return 0;
}