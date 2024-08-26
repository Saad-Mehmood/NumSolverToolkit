from random import uniform
from numpy import exp

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

print(areaUnderCurve)
