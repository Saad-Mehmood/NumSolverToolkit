# ---------------------------------------------------------
# Author: Saad Mehmood
# Date: September 2024
# Description: This code was developed by Saad Mehmood as part
# of the project NumSolverToolkit.
# Any use or modification of this code should include proper
# attribution to the original author.
# ---------------------------------------------------------
def Function(x):
    return (x**5 - x + 1)


def BisectionMethod(start, end, tolerance):
    a = start
    b = end

    if Function(a) * Function(b) >= 0:
        print("Bisection method fails.")
        return None

    while (abs(b - a) > tolerance):
        midpoint = (a + b) / 2

        if Function(a) * Function(midpoint) < 0:
            b = midpoint
        else:
            a = midpoint
        
    return midpoint


a = -2
b = -1

root = BisectionMethod(a, b, 0.000001)
if root is not None:
    print(f"Root: {root:.6f}")
