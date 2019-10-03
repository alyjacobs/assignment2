assignment2 : Bicycle.o Car.o Jet.o PoweredVehicle.o Skateboard.o Unicycle.o Vehicle.o
	g++ -o assignment2 main.cpp Bicycle.o Car.o Jet.o PoweredVehicle.o Skateboard.o Unicycle.o Vehicle.o

Bicycle.o: Bicycle.cpp Bicycle.h
	g++ -c -std=c++11 Bicycle.cpp

Car.o: Car.cpp Car.h
	g++ -c -std=c++11 Car.cpp

Jet.o: Jet.cpp Jet.h
	g++ -c -std=c++11 Jet.cpp

PoweredVehicle.o: PoweredVehicle.cpp PoweredVehicle.h
	g++ -c -std=c++11 PoweredVehicle.cpp

Skateboard.o: Skateboard.cpp Skateboard.h
	g++ -c -std=c++11 Skateboard.cpp

Unicycle.o: Unicycle.cpp Unicycle.h
	g++ -c -std=c++11 Unicycle.cpp

Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -c -std=c++11 Vehicle.cpp

clean:
	rm -f *.o assignment2
