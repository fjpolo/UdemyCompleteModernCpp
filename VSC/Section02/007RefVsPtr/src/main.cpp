#include <iostream>
/**
 * Difficult to use and prone to errors
 * Also needs a null check
 */
void Swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * Easy to use and no null check required
 */
void Swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}
/**
 * 
 */
void Print(int* ptr){
	using namespace std;
	if(ptr != nullptr){
		cout << *ptr << endl;
	}
}
void Print(int &ptr){
	using namespace std;
	cout << ptr << endl;
}
/**
 * 
 * main()
 * 
 */
int main() {
	using namespace std;
	int a = 5, b = 10;
	Swap(a, b);
	cout << "a:" << a << "\n";
	cout << "b:" << b << "\n";
	int x{5};
	// Print(&x);
	//Print(nullptr);
	Print(x);
	return 0;
}