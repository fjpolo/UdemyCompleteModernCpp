#include <iostream>
int Add(int a, int b) {
	return a + b;
}
double Add(double a, double b) {
	return a + b;
}
char Add(char a, char b){
	return a + b;
}
extern "C" void Print(int *x) {

}
void Print(const int* x) {

}
int main() {
	using namespace std;
	cout << "INT a + INT b = " << Add(3, 5) << endl;
	cout << "FLOAT a + FLOAT b = " << Add(3.1, 6.2) << endl;
	const int x = 1;
	Print(&x);
	cout << "ASCII a + ASCII b = " << Add('a', 'b') << endl;
	return 0;
}