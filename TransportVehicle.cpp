#include "TransportVehicle.h"

TransportVehicle::TransportVehicle(VehicleType type, unsigned int seat, unsigned int stop) : vtype(type), seat_count(seat), stop_count(stop)
{
}

std::ostream &operator<<(std::ostream &os, const TransportVehicle &rhs) {
    os << "permit: " << rhs.permit
       << " vtype: " << int(rhs.vtype)
       << " seat_count: " << rhs.seat_count
       << " stop_count: " << rhs.stop_count;
    return os;
}
