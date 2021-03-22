#include "../car/Car.h"
#include<iostream>
int main() {
	/*c*/
	Car c(5);
	Car::ShowCount();
	c.Dashboard();
	/*d*/
	Car d(5, 299);
	Car::ShowCount();
	d.Dashboard();
	/*e*/
	Car e(5, 133, 4);
	Car::ShowCount();
	e.Dashboard();
	return 0;
}