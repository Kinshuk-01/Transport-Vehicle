#include<iostream>
#include "Functionalities.h"

int main(){
    // creating a object of class container
    container data;

    createObjects(data);
    printPermitNumber(data, 1);
    averageOfVehicleType(data, VehicleType::MINIVAN);   
    isAllOfHaveSameType(data);
    
    return 0;
}
