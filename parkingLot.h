//
// Created by lenovo on 2018/11/28.
//

#ifndef TESTCPP_PARKINGLOT_H
#define TESTCPP_PARKINGLOT_H

#include <iostream>
#include <vector>
#include "Floor.h"
#include "slot.h"

using namespace std;

class ParkingLot {
public:
    ParkingLot();

    vector<int> &find_empty_slot(string sizeOfCar);

    // return floor and the location,);
    void clearSlot(int floor, int row, int column);

private:
    map<string, Floor> floors;
    map<string, int> namesMap;
    vector<string> names;
};

#endif //TESTCPP_PARKINGLOT_H