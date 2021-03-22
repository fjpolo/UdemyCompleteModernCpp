#pragma once
#include <iostream>
class Integer {
	int m_value{0};
public:
	/*Default constructor*/
	Integer() = default;
	/*Parametrized constructor*/
	Integer(int value){
		this->m_value = value;
	}
	/*Default implementation of the copy constructor*/
	Integer(const Integer &) = default;
	/*Not sinthetizable copy constructor*/
	Integer(const Integer &) = delete;
	/*SetValue*/
	void SetValue(int value){
		this->m_value = value;
	}
	void SetValue(float value) = delete;
	/*Destructor*/
	~Integer();

};
