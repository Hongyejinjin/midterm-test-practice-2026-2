#include <iostream> // 캡슐화된 클래스
#include "dayOfYear.h"

int main()
{
    dayOfYear today{};
    std::cout << "Enter today's date: " << std::endl;
    today.input();
    std::cout << "Today's date is ";
    today.print();
    dayOfYear bachBirthday{};
    bachBirthday.setMonth(3);
    bachBirthday.setDay(21);
    std::cout << "J. S. Bach's birthday is ";
    bachBirthday.print();
    if (today.getMonth() == bachBirthday.getMonth() && today.getDay() == bachBirthday.getDay())
        std::cout << "Happy Birthday Johann Sebastian!\n";
    else
        std::cout << "Happy Unbirthday Johann Sebastian!\n";
    return 0;
}
