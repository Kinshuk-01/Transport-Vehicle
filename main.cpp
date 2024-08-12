#include<iostream>
#include "Functionalities.h"

int main(){
    container data;

    createObjects(data);
    printPermitNumber(data, 1);
    averageOfVehicleType(data, VehicleType::MINIVAN);   
    isAllOfHaveSameType(data);
    
    return 0;
}