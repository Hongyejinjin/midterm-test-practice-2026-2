#include <iostream>

void greeting()
{
    std::cout << "Global Hello!" << std::endl;
}

namespace space1
{
    void greeting()
    {
        std::cout << "Hello from namespace1" << std::endl;
    }
}
namespace space2
{
    void greeting()
    {
        std::cout << "Greetings from namespace2." << std::endl;
    }
    void greetings()
    {
        greeting();
        ::greeting();// :: -> 전역네임스페이스(프로젝트 전체)에 있음을 명시, 따라서 void greeting을 위에 두어 C++이 이해할 수 있도록 만듦
    }
}


int main()
{
    space1::greeting(); //네임스페이스 space1에 있던 greeting 함수소환
    space2::greetings(); //네임스페이스 space2에 있던 greetings 함수소환
    greeting(); //전역네임스페이스에 있던 greeting 함수소환
    return 0;
}