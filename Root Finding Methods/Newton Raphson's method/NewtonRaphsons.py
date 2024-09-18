# ---------------------------------------------------------
# Author: Saad Mehmood
# Date: September 2024
# Description: This code was developed by Saad Mehmood as part
# of the project NumSolverToolkit.
# Any use or modification of this code should include proper
# attribution to the original author.
# ---------------------------------------------------------

def Func(x):
    return x**5 - x + 1


#Uses the Central Difference formula to calculate the derivative at "x"
def dydx(x, dx):
    return (Func(x + dx) - Func(x-dx)) / (2*dx)

def NewtonRaphson(x, tolerance):
    dx = 1e-3

    while (abs(Func(x)/dydx(x, dx)) > tolerance):
        x = x - (Func(x) / dydx(x, dx))
    
    return x


#tol is the tolerance, The closer the value of tol the more accurate is the root.
initialValue = 0
tol = 1e-16

print(f"Root: {NewtonRaphson(initialValue, tol):.4f}")


