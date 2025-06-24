// Chapter 2 Programming Project V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double  Gallons = 20;

    double Mileaget = 23.5;

    double Mileageh = 28.9;
  
    double Distancet = Mileaget * Gallons;
    double Distanceh = Mileageh * Gallons;
    




 

    std::cout << "The distance the car can travel on one tank of gas when driven in town is " << Distancet << " miles." std::endl;
    std::cout << "The distance the car can travel on one tank of gas when driven on the highway is " << Distanceh << " miles." std::endl;



    return 0;
}
