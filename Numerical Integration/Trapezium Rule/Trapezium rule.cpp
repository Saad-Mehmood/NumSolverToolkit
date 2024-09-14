/*
 * ---------------------------------------------------------
 * Author: Saad Mehmood
 * Date: September 2024
 * Description: This code was developed by Saad Mehmood as part 
 * of the project NumSolverToolkit.
 * Any use or modification of this code should include proper
 * attribution to the original author.
 * ---------------------------------------------------------
 */

#include <iostream>
#include <math.h>
using namespace std;


//Our Function
float function(float x)
{
    return exp(-2 * x);
}

int main()
{
    //Initializing variables and defining the domain
    float Area;
    float x_start = 0;
    float x_end = 2;
    float numberOfSlices = 10;

    float y0 = function(x_start);
    float yn = function(x_end);

    //Calculating the step size
    float stepSize = (x_end - x_start) / numberOfSlices;

    //x, K are temporary variables, x starts from x_1 and ends at x_(n-1) in the for loop.
    //K is just the sum (y_1 + y_2 + y_3 ... + y_(n-1))
    float x = x_start + stepSize;
    float K = 0;


    for (int i = 1; i < numberOfSlices - 1; i++)
    {
        K = K + function(x);
        x = x + stepSize;
    }


    //Using the generalized equation and printing the area upto 5 decimal places.
    Area = (stepSize/2.0) * (y0 + yn) + stepSize * K;
    printf("Area: %.5f", Area);
}