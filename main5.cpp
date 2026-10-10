#include <iostream> // 캡슐화된 클래스

class dayOfYear
{
    int month{};
    int day{};
    void testmonth();
    void testday();

public:
    void input();
    void print();
    void setMonth(int newMonth);
    void setDay(int newDay);
    int getMonth();
    int getDay();
    //private은 데이터를 보호하고, public은 보호된 데이터를 안전하게 사용하기 위한 통로를 제공한다.
};

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

void dayOfYear::testmonth()
{
    if ( (month < 1) || (month > 12) ) {
        std::cout << "Illegal month value" << std::endl;
        std::exit(1); // 일시적인 오류 종료
    }
}
void dayOfYear::testday()
{
    if ( (day < 1) || (day > 31) ) {
        std::cout << "Illegal day value" << std::endl;
        std::exit(1);
    }
}

void dayOfYear::input()
{
    std::cout << "Enter the month as a number: ";
    std::cin >> month;
    testmonth();
    std::cout << "Enter the day of the month: ";
    std::cin >> day;
    testday();
}
void dayOfYear::print()
{
    std::cout << month << "/" << day << std::endl;
}
void dayOfYear::setMonth(int newMonth)
{
    month = newMonth;
    testmonth();
}
void dayOfYear::setDay(int newDay)
{
    day = newDay;
    testday();
}
int dayOfYear::getMonth()
{
    return month;
}
int dayOfYear::getDay()
{
    return day;
}