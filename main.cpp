#include "myArray.hpp"
#include <iostream>
#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <array>




int main(){
  //    FØRSTE OPGAVE UDEN PARTIAL SPECIALISATIOn 
  //  myArray<int, 5> a1 = myArray<int, 5>();
  //  int poul = 5;
  //  a1.fill(poul);
//
//
  //  myArray<double, 10> a2 = myArray<double, 10>();
  //  a2.fill(poul);
  //  a1 = a2;
//
  //  // a2[1] = a1[2];
  //  // a2 = a1[2]
  //  cout << "a1" << endl;
  //  a1.print();
  //  cout << "a2" << endl;
  //  a2.print();
        myArray<string*, 3> s1 = myArray<string*, 3>();

        {
        string* yo = new string("Hej");
        s1.fill(yo);
        s1.print();

        s1[1] = new string("Hello");
        s1.print();

        
        std::cout << "Looking for 'Hello '? " << (myFind(s1.begin (), s1.end(),
        std::string("Hello")) != s1.end()? "found" : "sry no") << std::endl;

        }


        


    // a1.fill(5);

    //a1[0] = 3.3; // Assuming that 'my' has been appropriately allocated based on MyArray.
    //int number = 3;
    //std ::cout << "Looking for '3'? " << endl << (myFind(a1.begin(), a1.end(), number) != a1.end() ? "found" : "sry no") << std ::endl;

}

