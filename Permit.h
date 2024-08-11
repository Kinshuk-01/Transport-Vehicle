#include <iostream>

class Permit
{
private:
    std::string permit_number;
    unsigned int permit_duration;

public:
    Permit(std::string pNum, int pDuration);
    ~Permit() = default;

    std::string permitNumber() const { return permit_number; }

    unsigned int permitDuration() const { return permit_duration; }
};