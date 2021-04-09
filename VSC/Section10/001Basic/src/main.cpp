/**
 * Includes
 */ 
#include <iostream>
#include <string>
#include <limits>
#include <memory>
#include <vector>

/**
 * \class
 * 
 * \brief
 */ 
class Test{
    public:
        Test(){
            std::cout << "Test()" << std::endl;
        }
        ~Test(){
            std::cout << "~Test()" << std::endl;
        }
};

/**
 * \fn ProcessRecords
 * 
 * \brief
 */ 
// //  int ProcessRecords(int count){
// //      int *pArray = (int*)malloc(count* sizeof(int));
// //      if(pArray == nullptr){
// //          std::cout << "Failed to allocate memory" << std::endl;
// //          return -1;
// //      }
// //      for(int i=0;i<count;++i){
// //          pArray[i] = i;
// //      }
// //      free(pArray);
// //      return 0;
// //  }
//  int ProcessRecords(int count){
//      Test *t = new Test;
//      if(count < 10){
//          throw std::runtime_error("count should be greater than 10");
//      }
//      int *p = new int[count];
//      int *pArray = (int*)malloc(count* sizeof(int));
//      if(pArray == nullptr){
//         //  std::cout << "Failed to allocate memory" << std::endl;
//         throw std::runtime_error("Failed to allocate memory");
//      }
//      for(int i=0;i<count;++i){
//          pArray[i] = i;
//      }
//      free(pArray);
//      delete[] p;
//     delete t;

//      return 0;
//  }
 int ProcessRecords(int count){
    std::unique_ptr<Test> t(new Test);  // Call destructor when exception
    if(count < 10){
        throw std::runtime_error("count should be greater than 10");
    }
    std::vector<int> p;
    p.reserve(count);
    std::vector<int>pArray;
    pArray.reserve(count);
    for(int i=0;i<count;++i){
        pArray.push_back(i);
    }

     return 0;
 }




/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 106
     */
    // // ProcessRecords(std::numeric_limits<int>::max());
    // try{
    //     ProcessRecords(std::numeric_limits<int>::max());
    // }catch(std::runtime_error &ex){
    //     std::cout << "Exception: " << ex.what() << std::endl;
    // }

    /**
     * Video 107
     */
    // try{
    //     ProcessRecords(std::numeric_limits<int>::max());
    // }
    // catch(std::exception &ex){
    //     std::cout << "Exception: " << ex.what() << std::endl;
    // }
    // catch(...){             // AVOID!
    //     std::cout << "Exception: " << std::endl;    
    // }

    /**
     * Video 108 - Stack unwinding
     */
    // try{
    //     // ProcessRecords(std::numeric_limits<int>::max());
    //     ProcessRecords(15);
    // }
    // catch(std::exception &ex){
    //     std::cout << "Exception: " << ex.what() << std::endl;
    // }
    // catch(...){            
    //     std::cout << "Exception: " << std::endl;    
    // }

    /**
     * Video 109 - Nested exceptions
     */
    try{
        // ProcessRecords(std::numeric_limits<int>::max());
        ProcessRecords(15);
    }
    catch(std::exception &ex){
        std::cout << "Exception: " << ex.what() << std::endl;
    }
    catch(...){            
        std::cout << "Exception: " << std::endl;    
    }



    return 0;
}
 
