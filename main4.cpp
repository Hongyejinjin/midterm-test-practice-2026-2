#include <iostream>

class dayOfYear
{
public:
    void print();
    int month{};
    int day{};
};

int main()
{
    dayOfYear today{};
    std::cout << "Enter today's date: " << std::endl;
    std::cout << "Enter the month as a number: ";
    std::cin >> today.month;
    std::cout << "Enter the day of the month: ";
    std::cin >> today.day;
    std::cout << "Today's date is ";
    today.print();

    dayOfYear birthday{};
    std::cout << "Enter your birthday's date: " << std::endl;
    std::cout << "Enter the month as a number: ";
    std::cin >> birthday.month;
    std::cout << "Enter the day of the month: ";
    std::cin >> birthday.day;
    std::cout << "Your birthday is ";
    birthday.print();

    if (today.month == birthday.month && today.day == birthday.day) 
        std::cout << "Happy Birthday!" << std::endl;
    else 
        std::cout << "Have a Good Day!" << std::endl;

    return 0;
}

void dayOfYear::print()
{
    switch (month)
    {
        case 1:
            std::cout << "January"; break;
        case 2:
            std::cout << "Febuary"; break;
        case 3:
            std::cout << "March"; break;
        case 4:
            std::cout << "April"; break;
        case 5:
            std::cout << "May"; break;
        case 6:
            std::cout << "June"; break;
        case 7:
            std::cout << "July"; break;
        case 8:
            std::cout << "August"; break;
        case 9:
            std::cout << "September"; break;
        case 10:
            std::cout << "October"; break;
        case 11:
            std::cout << "November"; break;
        case 12:
            std::cout << "December"; break;
        default:
            std::cout << "Error dayOfYear::print()";
    }
    std::cout << " " << day << std::endl;
}