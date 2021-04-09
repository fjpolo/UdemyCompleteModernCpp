/**
 * Includes
 */
#include <iostream>

/**
 * \class Distance
 * 
 * \brief 
 */
class Distance {
	public:
		Distance(long double km):m_kilometers{km}{}
		long double GetKm()const{
			return this->m_kilometers;
		}
		void SetKm(long double val){
			this->m_kilometers = val;
		}

	private:
		long double m_kilometers;
};
/*User defined literal function miles to km*/
Distance operator"" _mi(long double val){
	return Distance{val * 1.6};
}
/*User defined literal function meters to km*/
Distance operator"" _meters(long double val){
	return Distance{val / 1000};
}

/**
 * \fn GetNumber
 * 
 * \brief 
 */
int GetNumber(){
	return 42;
}

/**
 * \fn GetNumberCompileTime
 * 
 * \brief 
 */
constexpr int GetNumberCompileTime(){
	return 42;
}

/**
 * \fn Add
 * 
 * \brief 
 */
constexpr int Add(int x, int y){
	return (x + y);
}

/**
 * \fn Add
 * 
 * \brief 
 */
constexpr int Max(int x, int y){
	/*C++11*/
	// // if(x > y) return x;	// Not allowed
	// // return y;				// Not allowed		
	// return (x > y ? x : y);
	
	/*C++14*/
	if(x > y) return x;
	return y;

}

/**
 * \fn main
 * 
 * \brief 
 */
int main() {
	/**
	 * Video 83
	 */
	std::cout << "Video 83:" << std::endl;
	/*Create distance object in km*/
	Distance dist_km{32};
	/*Create distance object in miles*/
	Distance dist_miles{22.0_mi};
	/*Create distance object in meters*/
	Distance dist_meters{2000.0_meters};
	/*Output*/
	std::cout << "km: " << dist_km.GetKm() << std::endl;
	std::cout << "22 " << "miles->km: " << dist_miles.GetKm() << std::endl;
	std::cout << "2000 " << "meters->km: " << dist_meters.GetKm() << std::endl;


	/**
	 * Video 84 constexpr
	 */
	std::cout << "Video 84:" << std::endl;
	/**/
	// constexpr int i = 10;	// Evaluated at compile time
	// int arr1[i];
	// const int j = 5;		// Evaluated at compile time, but not all. Some are init at runtime
	// int arr2[j];
	// constexpr int i = GetNumber();	// Won't work, evaluated at runtime
	// int arr1[i];
	// const int j = GetNumber();		// Evaluated at runtime
	// int arr2[j];

	/*Behaves as a constexpr function*/
	constexpr int i = GetNumberCompileTime();	
	int arr1[i];
	/*Behaves as a constexpr function*/
	const int j = GetNumberCompileTime();		
	int arr2[j];
	/*Behaves as a normal function*/
	int x  = GetNumberCompileTime();
	/*Add*/
	constexpr int sum1 = Add(3, 5);	// Compile time parameters
	// constexpr int sum1 = Add(x, 5);	// Won't work
	int sum2 = Add(3, 5);			// Runtime
	constexpr int max = Max(3, 5);
	


	return 0;
}

/**
 * Constant expression function rules
 * 
 *  	1- Accept and return Literal types only:
 *			void, scalar types (int, float, char), referencer, ... 
 *
 * 		2- Should contain onlysingle line statement that should be a return statement
 *
 * 		3- Explicitely inline (one line thingies). Define in headerfile
 */

/**
 * const vs constexpr
 * 
 * 	- init of a xonst var can be deferred until runtime
 * 	- a constexpr var must be init at compile time
 * 	- all constexpr vars are const, but not the other way round
 * 	- use const to indicate the value cannot be modified (eg a member of a class)
 * 	- use constexpr to create expressions that can be evaluated at compile time
 *  
 */