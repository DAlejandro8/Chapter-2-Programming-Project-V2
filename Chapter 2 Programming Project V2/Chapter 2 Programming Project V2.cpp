// Chapter 2 Programming Project V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
 

    double  people = 16500;

   double purchase = 0.15;//Converted from a percent

   double citrus = 0.58;//Converted from a percent

    
   double ppurchase = people * purchase;//individual people
    double pcitrus = ppurchase * citrus;//individual peopele.
    //I used the assignment as a part of the calculation for pcitrus
    
    


    //output

    std::cout << "The approximate number of customers in the survey purchasing one or more energy drinks per week is " <<ppurchase<< std::endl;
    std::cout << "The approximate number of customers in the survey preferring citrus-flavored energy drinks is " <<pcitrus<< std::endl;

   







}

