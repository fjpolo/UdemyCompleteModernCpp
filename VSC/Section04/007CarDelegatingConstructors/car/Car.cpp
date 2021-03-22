#include "Car.h"
#include <iostream>

/*Static variables*/
unsigned int Car::totalCount = 0;

Car::Car():Car(0) {
	std::cout << "Car()" << std::endl;
}
Car::Car(float fuel):Car(fuel, 0, 0) {
	std::cout << "Car(float fuel)" << std::endl;
}
Car::Car(float fuel, float speed):Car(fuel, speed, 0) {
	std::cout << "Car(float fuel, float speed)" << std::endl;
}
Car::Car(float fuel, float speed, int passengers) {
	std::cout << "Car(float fuel, float speed, int passengers)" << std::endl;
	++(this->totalCount);
	this->fuel = fuel;
	this->speed = speed;
	this->passengers = passengers;

}
void Car::FillFuel(float amount) {
	fuel = amount;
	// speed = 0;
	// passengers = 0;
}
void Car::Accelerate() {
	speed++;
	fuel -= 0.5f;
}
void Car::Brake() {
	speed = 0;
}
void Car::AddPassengers(int count) {
	passengers = count;
}
void Car::Dashboard()const{
	std::cout << "Fuel level : " << fuel << std::endl;
	std::cout << "Passengers : " << passengers << std::endl; 	
	std::cout << "Speed : " << speed << std::endl;
}
void Car::ShowCount(){
	std::cout << "Total count: " << totalCount;
}
Car::~Car() {
	std::cout << "~Car()" << std::endl;
	--(this->totalCount);
}
