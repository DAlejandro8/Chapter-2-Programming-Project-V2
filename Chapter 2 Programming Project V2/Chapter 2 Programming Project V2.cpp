// Chapter 2 Programming Project V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    
   

   double  Rate = 1.5 ; //The rate the ocean is rising per year

   int Year5 = 5;//In five years

   int Year7 = 7;//In 7 years

   int Year10 = 10 ;//In 10 years

   double Level5 = Year5 * Rate;
   double Level7 = Year7 * Rate;
   double Level10 = Year10 * Rate;



   //output results
    std::cout << "In " << Year5 << " years, the ocean will be " << Level5 << " millimeters higher \n";
    std::cout << "In " << Year7 << " years, the ocean will be " << Level7 << " millimeters higher \n";
    std::cout << "In " << Year10 << " years, the ocean will be " << Level10 << " millimeters higher \n";

    

    return 0;
}

