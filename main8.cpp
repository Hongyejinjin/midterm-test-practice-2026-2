#include "dayOfYear2.h"

bool compareDayOfYear(const dayOfYear& d1, const dayOfYear& d2) // 둘을 비교할 때 값이 변경되지 않도록 const를 사용한 것
{
    return ((d1.getDay() == d2.getDay())&& (d1.getMonth() == d2.getMonth()) );
} //클래스형 매개변수 참조에 의한 달

int main()
{
    dayOfYear today{}, birthday{3, 21};
    std::cout << "Enter today's date: " << std::endl;
    today.input();

    std::cout << "Today's date is: ";
    today.print();
    std::cout << "Your birthday's date is ";
    birthday.print();

    if (compareDayOfYear(today, birthday))
        std::cout << "Happy Birthday!" << std::endl;
    else
        std::cout << "Happy Unbirthday!" << std::endl;

    return 0;
}