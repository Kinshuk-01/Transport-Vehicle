#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "TransportVehicle.h"
#include <list>
#include <numeric>
#include <algorithm>
using container = std::list<TransportVehicle>;


// create instances of objects
void createObjects(container& data);

// Return permit number at the given index
void printPermitNumber(container& data, int idx);

// Print average of seat count of given vehicleType
void averageOfVehicleType(container& data, VehicleType type);

// check if all vehicle has same vehicleType or not
void isAllOfHaveSameType(container& data);


#endif // FUNCTIONALITIES_H
