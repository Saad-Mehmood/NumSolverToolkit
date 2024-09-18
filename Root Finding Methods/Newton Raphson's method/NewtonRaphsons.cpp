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

double Func(double x)
{
    return pow(x, 5) - x + 1;
}

double dydx(double x, double dx)
{
    return (Func(x + dx) - Func(x - dx)) / (2*dx);
}

double NewtonRaphson(double x, double tolerance)
{
    double dx = 1.00e-6;
    while (abs(Func(x)/dydx(x, dx)) > tolerance)
    {
        x = x - (Func(x)/dydx(x, dx));
    }
    return x;
}

int main()
{
    double initialValue = -1.00;
    double tol = 1e-16;

    printf("Root: %.5f\n", NewtonRaphson(initialValue, tol));
}