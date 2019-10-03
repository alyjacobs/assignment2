// Skateboard.cpp


#include "Skateboard.h"
#include <cstdlib>	// for srand(), rand()
#include <ctime>   // for time()


Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
  // generates a random number between 0.1 and 0.5
    int timee;
    double temp = rand() % 5 + 1;
    temp = temp/10;
    double mileage = temp * timee;
    if ( time > 25 && time < 250 ){
  // if time is more than 25 min and less than 250 minu
      timee = time/3;
      mileage += rand() % timee +1;
  // add a random amount of mileage ranging from 1 to 1/3 of time's value
    }

    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
