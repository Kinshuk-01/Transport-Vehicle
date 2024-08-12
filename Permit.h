#include <iostream>

class Permit
{
private:
    std::string permit_number;
    unsigned int permit_duration;

public:
    Permit(std::string pNum, unsigned int pDuration);
    ~Permit() = default;

    std::string getPermitNumber() const { return permit_number; }

    unsigned int getPermitDuration() const { return permit_duration; }

    friend std::ostream &operator<<(std::ostream &os, const Permit &rhs);
};