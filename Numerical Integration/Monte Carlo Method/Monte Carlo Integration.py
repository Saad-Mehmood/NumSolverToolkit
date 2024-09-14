# ---------------------------------------------------------
# Author: Saad Mehmood
# Date: September 2024
# Description: This code was developed by Saad Mehmood as part 
# of the project NumSolverToolkit.
# Any use or modification of this code should include proper
# attribution to the original author.
# ---------------------------------------------------------

#Instead of calling the whole library we only call the "uniform()" function that 
#gives us a floating point value between two given numbers, similaryly we only call the "exp()" function from numpy
from random import uniform 
from numpy import exp

#Function we want to integrate
def func(x):
    return exp(-2 * x)


length = 2
height = 1
totalPoints = 100
pointsUnderCurve = 0

for i in range(totalPoints):
    x = uniform(0,2)
    y = uniform(0,1)

    if y < func(x):
        pointsUnderCurve = pointsUnderCurve + 1
    
area = length * height

areaUnderCurve = area * (pointsUnderCurve / totalPoints)

print("Area under the curve: ", areaUnderCurve)
