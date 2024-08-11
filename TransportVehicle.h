#ifndef TRANSPORTVEHICLE_H
#define TRANSPORTVEHICLE_H

#include <iostream>
#include "VehicleType.h"

class TransportVehicle
{
private:
    VehicleType vtype;
    unsigned int seat_count;
    unsigned int stop_count;

public:
    TransportVehicle(VehicleType type, unsigned int seat, unsigned int stop);
    ~TransportVehicle() = default;

    VehicleType getVtype() const { return vtype; }

    unsigned int seatCount() const { return seat_count; }

    unsigned int stopCount() const { return stop_count; }
};

#endif // TRANSPORTVEHICLE_H
