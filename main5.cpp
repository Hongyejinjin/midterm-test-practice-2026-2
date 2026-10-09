#include <iostream>

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
};

int main()
{
    dayOfYear today{};
    std::cout << "Enter today's date: ";
    today.input();
    std::cout << "Today's date is ";
    today.print();
    dayOfYear bachBirthday{};
}