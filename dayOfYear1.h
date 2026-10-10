#pragma once
#include <iostream>

class dayOfYear
{
    int month{};
    int day{};
    void testDate()
    {
        if ( (month < 1) || (month > 12) ) {
            std::cout << "Illegal month value" << std::endl;
            std::exit(1); // 일시적인 오류 종료
        }
        if ( (day < 1) || (day > 31) ) {
            std::cout << "Illegal day value" << std::endl;
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
    //private은 데이터를 보호하고, public은 보호된 데이터를 안전하게 사용하기 위한 통로를 제공한다.
};
