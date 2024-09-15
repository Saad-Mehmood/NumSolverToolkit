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
#include <iostream>
#include <math.h>

using namespace std;

float Function(float x)
{
    return 0.4 * sin(0.8 * (x*x)) + 2;
}

float SimpsonsRule(float start, float end, int numberOfIntervals)
{
    float stepSize = (end - start) / numberOfIntervals;
    float x = start + stepSize;
    
    float y0 = Function(start);
    float yn = Function(end);
    float K = 0;
    
    for (int i = 1; i < numberOfIntervals; i++)
    {
        if (i%2 == 0){K += 2 * Function(x);}
        else{K += 4 * Function(x);}
        x += stepSize;
    }
    float Area = (stepSize / 3.00) * (y0 + K + yn);
    return Area;
}

int main()
{
    float xi = 0;
    float xf = 5;
    int N = 1000;
    
    printf("Area: %.4f", SimpsonsRule(xi, xf, N));
}