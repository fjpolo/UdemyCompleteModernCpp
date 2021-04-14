/**
 * Includes
 */ 
#include <iostream>
#include <algorithm>
#include <cstring>
#include "../Libraries/Integer.h"
#include <vector>

/**
 * \class 
 * 
 * \brief
 */ 
// template<typename T>
// class PrettyPrinter{
//     private:
//         T* m_pData;
//     public: 
//         PrettyPrinter(T* data):m_pData(data){
//             std::cout << "PrettyPrinter(T* data):m_pData(data)" << std::endl;
//         }
//         ~PrettyPrinter(){
//             std::cout << "~PrettyPrinter()" << std::endl;
//         }
//         void Print(){
//             std::cout << "{" << *m_pData << "}" << std::endl;
//         }
//         T* GetData()const{
//             return m_pData;
//         }
// };
// /*Explicit char specialization*/
// template<>
// class PrettyPrinter<char*>{
//     private:
//         char* m_pData;
//     public: 
//         PrettyPrinter(char* data):m_pData(data){
//             std::cout << "PrettyPrinter(char* data):m_pData(data)" << std::endl;
//         }
//         ~PrettyPrinter(){
//             std::cout << "~PrettyPrinter()" << std::endl;
//         }
//         void Print(){
//             std::cout << "{" << *m_pData << "}" << std::endl;
//         }
//         char* GetData(){
//             return m_pData;
//         }
// };
// /*Explicit std::vector<int> specialization*/
// template<>
// class PrettyPrinter<std::vector<int>>{
//     private:
//         std::vector<int>* m_pData;
//     public: 
//         PrettyPrinter(std::vector<int> *data):m_pData(data){
//             std::cout << "PrettyPrinter(std::vector<int> *data):m_pData(data)" << std::endl;
//         }
//         ~PrettyPrinter(){
//             std::cout << "~PrettyPrinter()" << std::endl;
//         }
//         void Print(){
//             std::cout << "{";
//             for(const auto &x : *m_pData){
//                 std::cout << x << ' ';
//             }
//             std::cout << "}" << std::endl;
//         }
//         std::vector<int>* GetData(){
//             return m_pData;
//         }
// };
template<typename T>
class PrettyPrinter {
	T *m_pData;
public:
	PrettyPrinter(T *data) :m_pData(data) {

	}
	void Print() {
		std::cout << "{" << *m_pData << "}" << std::endl;
	}

	T * GetData() {
		return m_pData;
	}
};

/*Explicit specialization of a member function should appear outside the class*/
template<>
void PrettyPrinter<std::vector<int>>::Print() {
	std::cout << "{";
	for (const auto &x : *m_pData) {
		std::cout << x;
	}
	std::cout << "}" << std::endl;
}
template<>
class PrettyPrinter<char*> {
	char *m_pData;
public:
	PrettyPrinter(char *data) :m_pData(data) {

	}
	void Print() {
		std::cout << "{" << m_pData << "}" << std::endl;
	}
	char * GetData() {
		return m_pData;
	}
};

/**
 * \fn 
 * 
 * \brief
 */ 





/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 136
     */
    // int data{5};
    // float f{8.2f};
    // PrettyPrinter<int> p1(&data);
    // p1.Print();
    // PrettyPrinter<float> p2(&f);
    // p2.Print();
    // /*char array*/
    // char *p{"Hello World!"};
    // // // // PrettyPrinter<char*> p3(p);  // ERROR
    // // // // p3.Print();
    // // // PrettyPrinter<char*> p3(&p); 
    // // // p3.Print();
    // // // char *pDta = p3.GetData();  // ERROR
    // // PrettyPrinter<char> p3(p); 
    // // p3.Print();
    // // char *pDta = p3.GetData();  // First char
    // PrettyPrinter<char*> p3(p); 
    // p3.Print();
    // char *pData = p3.GetData();  // First char

    /**
     * Video 137
     */
    std::vector<int> v{1,2,3,4,5};
    PrettyPrinter<std::vector<int>> pv(&v);
    pv.Print();
    

    return 0;
}
 
