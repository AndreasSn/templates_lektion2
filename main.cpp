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

    // std::cout << *a1.begin() << std::endl;
    // std::cout << *a1.end() << std::endl;
    // std::cout << a1.size() << std::endl;

}