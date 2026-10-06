#include <iostream>

struct student
{
    int id{};
    char grade{};
};

void printStudent(const student& s)
{
    std::cout << "ID: " << s.id << std::endl;
    std::cout << "Grade: " << s.grade << std::endl;
}

student inputStudent()
{
    student s{};
    std::cout << "Enter student ID: ";
    std::cin >> s.id;
    std::cout << "Enter student Grade: ";
    std::cin >> s.grade;
    return s;
}

int main()
{
    student hong{1234567, 'A'};
    printStudent(hong);

    student kim{ inputStudent() };
    printStudent(kim);

    return 0;
}