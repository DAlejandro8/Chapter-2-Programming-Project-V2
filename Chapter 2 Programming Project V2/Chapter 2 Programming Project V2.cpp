// Chapter 2 Programming Project V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double  Gallons = 20;// The tank size of the car, in gallons.

    double Mileaget = 23.5;//mileage in a town

    double Mileageh = 28.9;//mileage on the highway
  
    double Distancet = Mileaget * Gallons;//Units in miles 
    double Distanceh = Mileageh * Gallons;//Units in miles
    




 
    //Output
    std::cout << "The distance, in miles, the car can travel on one tank of gas when driven in town is " << Distancet <<  std::endl;
    std::cout << "The distance, in miles, the car can travel on one tank of gas when driven on the highway is " << Distanceh <<  std::endl;



    return 0;
}
