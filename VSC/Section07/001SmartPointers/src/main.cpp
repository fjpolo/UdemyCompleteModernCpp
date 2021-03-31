#include "../Integer/Integer.h"
#include <iostream>
#include <memory>

/**
 * \class Project
 */
class Employee;
 class Project{
	public:
		std::weak_ptr<Employee> m_emp;
		Project(){std::cout << "Project()" << std::endl;}
		~Project(){std::cout << "~Project()" << std::endl;}

 };


/**
 * \class Employee
 */
 class Employee{
	private:
		// Project *m_Project;
		// std::unique_ptr<Project> m_Project;
		// std::shared_ptr<Project> m_Project;
	public:
		std::shared_ptr<Project> m_Project;
		Employee(){std::cout << "Employee()" << std::endl;}
	 	~Employee(){std::cout << "~Employee()" << std::endl;}
		// void SetProject(std::unique_ptr<Project> p){
		// void SetProject(std::unique_ptr<Project> &p){
		void SetProject(std::shared_ptr<Project> p){
			this->m_Project = p;
		}
		// Project* GetProject()const{
		// std::unique_ptr<Project> GetProject()const{
		// std::shared_ptr<Project> GetProject()const{
		// 	return this->m_Project;
		// }

 };


/**
 * \class Printer
 */
class Printer{
	private:
		// std::shared_ptr<int> m_pValue{};
		std::weak_ptr<int> m_pValue{};

	public:
		// void SetValue(std::shared_ptr<int> p){
		void SetValue(std::weak_ptr<int> p){
			m_pValue = p;
		}
		void Print(){
			if(m_pValue.expired()){
				std::cout << "Resource not available!" << std::endl;
				return ;
			}
			auto sp = m_pValue.lock();
			std::cout << "Ref count: " << m_pValue.use_count() << std::endl; 
			std::cout << "Value is: " << *sp << std::endl;
		}

};


/**
 * \fn GetPointer
 *
 * \brief Creates an Integer object and returns it.-
 */
Integer * GetPointer(int value){
	Integer *p = new Integer{value};
	return p;
}

/**
 * \fn Display
 *
 * \brief 
 */
void Display(Integer* integer_p){
	if(integer_p != nullptr){
		std::cout << integer_p->GetValue() << std::endl;
	}
}

/**
 * \fn Store
 *
 * \brief 
 */
// void Store(std::unique_ptr<Integer> p){
// 	std::cout << "Storing data into a file: " << p->GetValue() << std::endl;
// }
void Store(std::unique_ptr<Integer> &p){
	std::cout << "Storing data into a file: " << p->GetValue() << std::endl;
}

/**
 * \fn AssignProject
 */
// Employee* AssignProject(){
std::shared_ptr<Employee> AssignProject(){
	// Project* p = new Project{};
	// std::unique_ptr<Project> p{new Project{}};
	std::shared_ptr<Project> p{new Project{}};
	Employee *e1 = new Employee{};
	e1->SetProject(p);
	return std::shared_ptr<Employee>{e1};
}

/**
 * \fn Operate
 *
 * \brief 
 */
// void Operate_70(int value){
// 	std::cout << "Video 70: " << std:: endl;
// 	Integer *p = GetPointer(value);
// 	if(p == nullptr){
// 		p = new Integer{value};
// 	}
// 	Display(p);
// 	p->SetValue(200);
// 	Display(p);
// 	delete p;
// 	p = nullptr;
// 	p = new Integer{value};
// 	Display(p);
// 	*p = __LINE__;
// 	Display(p);
// 	delete p;
// 	std::cout << std:: endl;
// }
// void Operate_71(int value){
// 	std::cout << "Video 71: " << std:: endl;
// 	std::unique_ptr<Integer> p{GetPointer(value)};
// 	if(p == nullptr){
// 		p.reset(new Integer{value});
// 	}
// 	p->SetValue(150);
// 	Display(p.get());
// 	// delete p;
// 	p = nullptr;
// 	// p = new Integer{value};
// 	p.reset(new Integer{});
// 	Display(p.get());
// 	*p = __LINE__;
// 	Display(p.get());
// 	// Store(p);			// Error - Cannot create a copy of a smart o´pointer
// 	// Store(std::move(p));	// One solution
// 	Store(p);				// Call by reference
// 	*p = 233;
// 	Display(p.get());
// 	// delete p;
// 	std::cout << std:: endl;
// }
// void Operate_72(){
// 	std::cout << "Video 72: " << std:: endl;
// 	auto sp = AssignProject();
// 	if(sp == nullptr){

// 	}
// 	sp.get();
// 	sp.reset(new Employee{});
// 	std::cout << std:: endl;
// }
// void Operate_73(){
// 	std::cout << "Video 73: " << std:: endl;
// 	Printer prn{};
// 	int num{};
// 	std::cout << "Input number: "; 
// 	std::cin >> num;
// 	// int* p = new int(num);
// 	std::shared_ptr<int> p{new int(num)};
// 	prn.SetValue(p);
// 	if(*p > 5){
// 		// delete p;
// 		p = nullptr;
// 	}	
// 	prn.Print();
// 	// delete p;
// 	std::cout << std:: endl;
// }



/**
 * 
 * \fn main
 * 
 */
int main() {
	/**
	* Video 70 OldSchool C style
	*/
	// Operate_70(100);

	/**
	* Video 71 Unique pointer
	*/
	// Operate_71(75);

	/**
	 * Video 72
	 */
	// Operate_72();

	/**
	 * Video 73 Shared Pointer
	 */
	// Operate_73();

	/**
	 * Video 74 Weak Pointer
	 */
	// Operate_73();
	
	/**
	 * Video 75 Circular reference
	 */
	std::shared_ptr<Employee> emp{new Employee{}};
	std::shared_ptr<Project> prj{new Project{}};
	emp->m_Project = prj;
	prj->m_emp = emp;
	// delete emp;
	// delete prj;
	/**/
	return 0;
}