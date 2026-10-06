#include <iostream>

struct student
{
    int id{};
    char grade{};

    void print()
    {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Grade: " << grade << std::endl;
    }

    void input()
    {
        std::cout << "Enter student ID: ";
        std::cin >> id;
        std::cout << "Enter student Grade: ";
        std::cin >> grade;
    }
};

int main()
{
    student hong{1234567, 'A'};
    hong.print();

    student kim{};
    kim.input();
    kim.print();

    return 0;
}