#include "Functionalities.h"

void createObjects(container& data)
{
    data.push_back(TransportVehicle(std::make_shared<Permit>("101", 10), VehicleType::CAB, 5, 2));
    data.push_back(TransportVehicle(std::make_shared<Permit>("102", 20), VehicleType::BUS, 30, 8));
    data.push_back(TransportVehicle(std::make_shared<Permit>("103", 30), VehicleType::MINIVAN, 10, 5));
    data.push_back(TransportVehicle(std::make_shared<Permit>("104", 40), VehicleType::CAB, 8, 1));
    data.push_back(TransportVehicle(std::make_shared<Permit>("105", 50), VehicleType::BUS, 35, 5));
}

void printPermitNumber(container& data, int idx)
{
    if(data.empty())
    {
        std::cout<<"Data is empty\n";
    }

    auto it = std::next(data.begin(), idx);
    std::cout<<"Permit number of vehicle at index "<<idx<<" is: "<<it->getPermit()->getPermitNumber()<<"\n";
}

void averageOfVehicleType(container& data, VehicleType type)
{
    int count = 0;
    int seat_sum = std::accumulate(data.begin(), data.end(), 0.0f, [&](float puci, TransportVehicle& obj){
        int seat = 0;
        if(obj.getVtype() == type)
        {
            count++;
            seat = obj.seatCount();
        }

        return puci += seat;
    });

    std::cout<<"Average of seats of vehicle "<<int(type)<<" is: "<<seat_sum/count<<"\n";
}

void isAllOfHaveSameType(container& data)
{
    VehicleType firstVehicleType = data.front().getVtype();
    bool flag = std::all_of(data.begin(), data.end(), [&](TransportVehicle& obj){return obj.getVtype() == firstVehicleType;});

    std::cout<<"Do all the vehicles have same type? : "<<std::boolalpha<<flag<<"\n";
}

