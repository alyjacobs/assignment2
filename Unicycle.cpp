// Unicycle.cpp


#include "Unicycle.h"


Unicycle::Unicycle(string brand, string model, int wheelSize) {
    setBrand(brand);
    setModel(model);
    setWheelSize(wheelSize);
}

Unicycle::~Unicycle() = default;

int Unicycle::getWheelSize() {
    return myWheelSize;
}

void Unicycle::setWheelSize(int wheelSize) {
    myWheelSize = wheelSize;
}


double Unicycle::mileageEstimate(double time) {
    double mileage;
    if (myWheelSize > 29 || myWheelSize < 24){ //faster paced unicycles are in this range
    mileage = myWheelSize/3;
    mileage = mileage * time;
    }
    else{ // if wheel size is greater than 29 inch or less than 24 inch
      mileage = 2 * time;
    }

    return mileage;
}

string Unicycle::toString() {
    string s = "-> Unicycle\n\t";
    return "-> Unicycle\n" + Vehicle::toString() + "\n\t Wheel Size: " +
           to_string(myWheelSize);
}
