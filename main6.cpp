#include <iostream>

class dayOfYear
{
    int month{};
    int day{};
    void testDate()
    {
        if ( (month < 1) || (month > 12) ) {
            std::cout << "Illegal month value." << std::endl;
            std::exit(1);
        }
        if ( (day < 1) || (day > 31) ) {
            std::cout << "Illegal day value. " << std::endl;
            std::exit(1);
        }
    }
public:
    dayOfYear(int monthValue = 1, int dayValue = 1)
    : month{monthValue}, day{dayValue}
    {
        testDate();
    }
    void input()
    {
        std::cout << "Enter the month as a number: ";
        std::cin >> month;
        std::cout << "Enter the day of the month: ";
        std::cin >> day;
        
        testDate();
    }
    void print()
    {
        std::cout << month << "/" << day << std::endl;
    }
    int getMonth()
    {
        return month;
    }
    int getDay()
    {
        return day;
    }
};

int main()
{
    dayOfYear date1{2,21}, date2{ 5 }, date3{};
    std::cout << "Initialized dates: " << std::endl;
    date1.print();
    date2.print();
    date3.print();

    date1.input();
    std::cout << "date1 reset to the following:" << std::endl;
    date1.print();

    return 0;
}