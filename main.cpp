#include "myArray.hpp"
#include <iostream>
#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <array>



int main(){
    
    myArray<int, 3> a1 = myArray<int, 3>();

    a1.fill(5);
    a1[2] = 159;

    myArray<double, 3> a2;
     a2 = a1;

    // a2[1] = a1[2];
    // a2 = a1[2]
    a1.print();
    a2.print();


    // a1.fill(5);

    //a1[0] = 3.3; // Assuming that 'my' has been appropriately allocated based on MyArray.
    //int number = 3;
    //std ::cout << "Looking for '3'? " << endl << (myFind(a1.begin(), a1.end(), number) != a1.end() ? "found" : "sry no") << std ::endl;

}

