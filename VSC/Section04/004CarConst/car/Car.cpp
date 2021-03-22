#include "Car.h"
#include <iostream>

Car::Car() {
}
Car::Car(float amount) {
	this->fuel = amount;
	// this->speed = 0;
	// this->passengers = 0;

}
Car::Car(float fuel, float speed) {
	this->fuel = fuel;
	this->speed = speed;
	// this->passengers = passengers;

}
Car::Car(float fuel, float speed, int passengers) {
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
	std::cout << "Speed : " << speed << std::endl;
	std::cout << "Passengers : " << passengers << std::endl; 
}
Car::~Car() {
}
