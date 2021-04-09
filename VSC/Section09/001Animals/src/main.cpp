/**
 * Includes
 */ 
#include <iostream>

/**
 * \class Animal
 * 
 * \brief
 */ 
class Animal{
    public:
        Animal(){}
        ~Animal(){}
        void Eat(){ std::cout << "Animal eating" << std::endl;}
        void Run(){ std::cout << "Animal running" << std::endl;}
        void Speak(){ std::cout << "Animal speaking" << std::endl;}
};

/**
 * \class Dog
 * 
 * \brief
 */ 
class Dog:public Animal{
    public:
        void Eat(){ std::cout << "Dog eating" << std::endl;}        // 
        void Speak(){ std::cout << "Dog barking" << std::endl;}    //

};

/**
 * \fn main
 * 
 * \brief
 */
int main(){
    Dog pug;
    pug.Eat();
    pug.Run();
    pug.Speak();


    return 0;
}
 
