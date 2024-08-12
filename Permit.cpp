#include "Permit.h"

Permit::Permit(std::string pNum, unsigned int pDuration) : permit_number(pNum), permit_duration(pDuration)
{}

std::ostream &operator<<(std::ostream &os, const Permit &rhs) {
    os << "permit_number: " << rhs.permit_number
       << " permit_duration: " << rhs.permit_duration;
    return os;
}
