// Jet.cpp


#include "Jet.h"
#include <cstdlib>	// for srand(), rand()
#include <ctime>   // for time()

Jet::Jet() {
    setNumberOfEngines(1);
    setBrand("Custom");
    setModel("XYZ");
    setFuelType("Rocket");
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setNumberOfEngines(numberOfEngines);
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int numberOfEng) {
    numberOfEngines = numberOfEng;
}

double Jet::mileageEstimate(double time) {
    double mileage;
    mileage = rand () % 61 + 40; // assign mileage to random number from 40-100
    if ((getNumberOfEngines() > 2) && getFuelType() == "Rocket" ){
      double temp = numberOfEngines * 5.5;
      mileage = temp * mileage;
    }

    return mileage;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\t Number of Engines: " +
           to_string(numberOfEngines);
}
