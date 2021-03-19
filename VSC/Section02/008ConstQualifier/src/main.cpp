#include <iostream>

/**
 * Print()
 */
void Print(int *ptr) {
	using namespace std;
	cout << *ptr << endl;
}

/**
 * UsingConst()
 */
void UsingConst() {
	using namespace std;
	float radius = 0;
	cin >> radius;
	const float PI = 3.14159f;
	float area = PI * radius * radius;
	float circumference = PI * 2 * radius;
	cout << "Area is : " << area << endl;
	cout << "Circumference is : " << circumference << endl;

	const int CHUNK_SIZE = 512;
	const int *const ptr = &CHUNK_SIZE;
	//*ptr = 1;
	int x = 10;
	//ptr = &x;
	//*ptr = 1;
	Print(&x);
	cout << "main->x" << x << endl;
}

/**
 * PrintRef()
 */
void PrintRef(const int &ref) {
	using namespace std;
	cout << ref << endl;
}

/**
 * UsingConstRef()
 */
void UsingConstRef() {
	int x = 5;
	/*Print variable*/
	PrintRef(x);
	/*Print constant*/
	PrintRef(1);
}

/**
 * 
 * main()
 * 
 */
int main() {
	using namespace std;
	/*Tests*/
	// const int CHUNK_SIZE = 512;
	// const int* const ptr = &CHUNK_SIZE;
	// // *ptr = 1;
	// int x{10};
	// // ptr = &x;
	// // *ptr = 1;
	// Print(&x);
	// cout << "main->x " << x << endl;
	
	/*Class*/
	UsingConst();
	UsingConstRef();
	

	/*Assignment*/
	//Try to modify x1 & x2 and see the compilation output
	int x = 5 ;
	const int MAX = 12 ;
	int &ref_x1 = x ;
	const int &ref_x2 = x ;
	// ref_x1 = 12;
	// ref_x2 = 11;

	//Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
	const int *ptr1 = &x ;
	const int *ptr2 = &x ;
	const int * const ptr3 = &x ;
	// *ptr1 = 122;
	// *ptr2 = 32;

	//Find which declarations are valid. If invalid, correct the declaration
	const int* const ptr4 = &MAX;
	const int* const ptr5 = &MAX;

	const int &r1 = ref_x1;
	const int &r2 = ref_x2;

	const int* &p_ref1 = ptr1;
	const int* &p_ref2 = ptr2;
	
	
	
	
	return 0;
}














