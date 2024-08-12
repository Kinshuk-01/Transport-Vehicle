#include "TransportVehicle.h"

TransportVehicle::TransportVehicle(PermitPtr permit, VehicleType type, unsigned int seat, unsigned int stop) : permit(permit), vtype(type), seat_count(seat), stop_count(stop)
{
}

std::ostream &operator<<(std::ostream &os, const TransportVehicle &rhs) {
    os << "permit: " << *(rhs.permit)
       << " vtype: " << static_cast<int>(rhs.vtype)
       << " seat_count: " << rhs.seat_count
       << " stop_count: " << rhs.stop_count;
    return os;
}
