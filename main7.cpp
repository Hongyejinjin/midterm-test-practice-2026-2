#include "dayOfYear1.h"

class holiday
{
    dayOfYear date{};
    bool parkingEnforcement{};
public:
    holiday(dayOfYear holidayDate, bool theEnforcement)
    : date{holidayDate}, parkingEnforcement{theEnforcement} {}
    void print()
    {
        date.print();

        if (parkingEnforcement)
            std::cout << "Parking laws will be enforced." << std::endl;
        else   
            std::cout << "Parking laws will not be enforced." << std::endl;
    }

};

int main()
{
    holiday christmas{ dayOfYear{12, 25}, false };
    christmas.print();

    return 0;
}