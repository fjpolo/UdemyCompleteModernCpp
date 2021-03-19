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
 *  main()
 * 
 */
int main() {
    /*Namespaces*/
    using namespace std;
    /*Variable declaration*/
    // int it = 0;
    // int it = {0};
    int it {0};
    float myfloat = 3.14;
    double mydouble = 0.000000000000000314;
    char mychar = '@';
    bool mybool = true;
    // int array[5] = {0, 1, 2, 3, 4};  // Python like
    int array[5] {0, 1, 2, 3, 4};
    /*Print everything*/
    cout << "Hello C++ world!" << endl;
    for(it=0;it<10;it++){
        cout << "it: " << it << endl;
    }
}

