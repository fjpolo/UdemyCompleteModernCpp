#include <iostream>
#include <memory>
#include "../integer/Integer.h"

/**
 * \class IntPtr
 */
class IntPtr {
	Integer *m_p;
public:
	IntPtr(Integer *p) :m_p(p) {

	}
	~IntPtr() {
		delete m_p;
	}
	Integer *operator ->() {
		return m_p;
	}
	Integer & operator *() {
		return *m_p;
	}
};
/**
 * \fn CreateInteger
 */
void CreateInteger() {
	std::unique_ptr<Integer> p(new Integer);
	//auto p2(p);
	(*p).SetValue(3);
	//std::cout << p->GetValue() << std::endl; 
}

/**
 * \fn Process
 */
void Process(Integer val) {

}

/*Copies created*/
// void Print(Integer i){}
// Integer Add(int x, int y){return Integer(x+1);}

/**
 * 
 * \fn main
 * 
 */
int main() {
	/*Shallow copy*/
	// int* p1 = new int(5);
	// int *p2 = p1;

	/*Deep copy*/
	// Integer i(5);
	// Integer i2(i);
	// i = i2;
	// std::cout << i.GetValue() << std::endl;

	/**/
	Integer a(3);
	/*auto b(std::move(a));
	std::cout << a << std::endl;*/
	Process(std::move(a));
	return 0;
}

