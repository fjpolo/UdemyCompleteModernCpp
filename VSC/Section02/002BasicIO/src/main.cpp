/**
 * \file main.cpp
 * 
 */

/**
 * Includes
 */
#include <iostream>

/**
 * 
 * main()
 * 
 */
int main(){
	/*Namespaces*/
	using namespace std;
	/*Variables*/
	char buff[512];
	int age ;
	/*
	There's a better way to do it. Check the 
	lecture on std::strings if you're curious :)
	*/

	/*Print task*/
	cout << "What is your name?";
	/*Read input*/
	cin.getline(buff, 64, '\n');
	/*Print back*/
	cout << "Your name is:" << buff << endl;
	/*Print age back*/
	cout << "What's your age?" << endl;
	cin >> age;
	cout << "You are " << age << " years old" << endl;
	return 0;
}