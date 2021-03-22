#include <iostream>
#include <memory>
#include "../integer/Integer.h"


/**
 * 
 * \fn main
 * 
 */
int main() {
	Integer i1;
	Integer i2(5);
	i1.SetValue(2);
	// i2.SetValue(4.6f);	// Forbidden by "delete" in .h
	return 0;
}

