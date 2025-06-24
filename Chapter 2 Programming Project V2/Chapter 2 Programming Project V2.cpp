// Chapter 2 Programming Project V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    
   

   double  Rate = 1.5 ;

   int Year5 = 5;

   int Year7 = 7;

   int Year10 = 10 ;

   int Level5 = Year5 * Rate;
   int Level7 = Year7 * Rate;
   int Level10 = Year10 * Rate;




    std::cout << "In " << Year5 << " years, the ocean will be " << Level5 << " millimeters higher \n";
    std::cout << "In " << Year7 << " years, the ocean will be " << Level7 << " millimeters higher \n";
    std::cout << "In " << Year10 << " years, the ocean will be " << Level10 << " millimeters higher \n";

    

    return 0;
}

