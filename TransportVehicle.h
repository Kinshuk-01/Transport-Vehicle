#ifndef TRANSPORTVEHICLE_H
#define TRANSPORTVEHICLE_H

#include <iostream>
#include <memory>
#include "VehicleType.h"
#include "Permit.h"

using PermitPtr = std::shared_ptr<Permit>;

class TransportVehicle
{
private:
    PermitPtr permit;
    VehicleType vtype;
    unsigned int seat_count;
    unsigned int stop_count;

public:
    TransportVehicle(PermitPtr permit, VehicleType type, unsigned int seat, unsigned int stop);
    ~TransportVehicle() = default;

    VehicleType getVtype() const { return vtype; }

    unsigned int seatCount() const { return seat_count; }

    unsigned int stopCount() const { return stop_count; }

    PermitPtr getPermit() const { return permit; }

    friend std::ostream &operator<<(std::ostream &os, const TransportVehicle &rhs);
};

#endif // TRANSPORTVEHICLE_H
