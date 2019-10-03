// Unicycle.h

#ifndef DRIVINGSIMULATOR_UNICYCLE_H
#define DRIVINGSIMULATOR_UNICYCLE_H

#include "Vehicle.h"

class Unicycle : public Vehicle {

private:
  int myWheelSize;


public:
    explicit Unicycle(string brand, string model, int wheelSize);

    virtual ~Unicycle();
    int getWheelSize();
    void setWheelSize(int wheelSize);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_UNICYCLE_H
