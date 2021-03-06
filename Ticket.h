//
// Created by Wangdawei on 2018/11/22.
//

#ifndef PROJECT3_TICKET_H
#define PROJECT3_TICKET_H

#include <vector>
#include "Vehicle.h"

class Ticket {
protected:
    std::string type;
public:
    virtual void print() = 0;
};

class ArriTicket : public Ticket {
    std::string arriTime;
    int floor, column, row;
public:
    ArriTicket();

    void print() override;

    void set(std::string const &arriTime, int floor, int row, int column, std::string const &type);
};

class DepartTicket : public Ticket {
    double time;
    double price;
public:
    DepartTicket();

    void print() override;

    void set(double time, double price, std::string const &type);
};

void printDepartTicket(Vehicle const &v);

void printArriTicket(Vehicle const &v, int floor, int row, int column);
void printLeaving(vector<Vehicle> vehicles);

void printArri(vector<Vehicle> vehicles);
#endif //PROJECT3_TICKET_H
