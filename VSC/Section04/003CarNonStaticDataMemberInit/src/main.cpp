#include "../car/Car.h"
#include<iostream>
int main() {
	/*c*/
	Car c(5);
	c.Dashboard();
	/*d*/
	Car d(5, 299);
	d.Dashboard();
	/*e*/
	Car e(5, 133, 4);
	e.Dashboard();
	return 0;
}