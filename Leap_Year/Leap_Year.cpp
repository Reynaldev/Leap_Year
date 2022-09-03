#include<iostream>
#include <string>

int main()
{
    int year;
    
    std::cout << "Input a year: ";
    std::cin >> year;

    if (std::to_string(year).length() != 4)
    {
        std::cout << "Not a 4 digit number\n";
        return 0;
    }

    if (year % 4 != 0) return 0;
    if (year % 100 != 0 && year % 400 != 0) return 0;
    if (year % 400 != 0) return 0;

    std::cout << "It's a leap year!\n";
    
    return 0;
}
