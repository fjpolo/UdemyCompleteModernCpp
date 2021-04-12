/**
 * Includes
 */ 
#include <iostream>
#include <string>
#include <limits>
#include <memory>
#include <vector>
#include <fstream>

/**
 * \class
 * 
 * \brief
 */ 


/**
 * \fn Write
 * 
 * \brief
 */ 
void Write(){
    /*Open file*/
    std::ofstream out{"data.txt"};
    /*Write string*/
    out << "Hello file world!" << std::endl;
    /*Write int*/
    out << 10 << std::endl;
    /*Close file*/
    out.close();
}


/**
 * \fn Read
 * 
 * \brief
 */ 
void Read(){
    /*Open file*/
    // std::ifstream in{"data.txt"};
    std::ifstream in;
    in.open("data.txt");
    // if(!in.is_open()){
    //     std::cout << "File not found!" << std::endl;
    //     return;
    // }
    /*Check if it failed*/
    if(in.fail()){
        std::cout << "File not found!" << std::endl;
        return;
    }
    /*Read string*/
    std::string message;
    std::getline(in, message);
    /*Read int*/
    int value{};
    value >> value;
    // if(in.fail()){
    /*Check if EOF*/
    if(in.eof()){
        std::cout << "Could not read" << std::endl;
    }
    /*Check if all goood*/
    if(in.good()){
        std::cout << "IO operations successful" << std::endl;
    }
    else{
        std::cout << "Some IO operations failed" << std::endl;
    } 
    /*Set fail state*/
    in.setstate(std::ios::failbit);
    /*Clear state flags*/
    in.clear();
    /*Close file*/  
    in.close();
    /*Print what we read*/
    std::cout << message << " | " << value << std::endl;
    
}


/**
 * \fn main
 * 
 * \brief
 */
int main(){

    /**
     * Video 114 - Write and Read
     */ 
    // Write();
    // Read();

    /**
     * Video 114 - Write and Rea5
     */ 
    Write();
    Read();



    return 0;
}
 
