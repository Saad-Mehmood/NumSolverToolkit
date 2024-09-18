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


float Function(float x)
{
    return pow(x, 5) - x + 1;
}

float BisectionMethod(float start, float end, double tolerance)
{
    float a = start;
    float b = end;
    float midPoint;

    while (abs(b - a) > tolerance)
    {
        midPoint = (a + b) / 2;

        if (Function(a) * Function(midPoint) < 0)
        {
            b = midPoint;
        }
        else
        {
            a = midPoint;
        }
    }

    return midPoint;
}


int main()
{
    float a = -2;
    float b = -1;

    printf("Root: %.5f", BisectionMethod(a, b, 0.00001));
}