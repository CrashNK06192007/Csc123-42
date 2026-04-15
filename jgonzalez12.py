# Julian Gonzalez
# 4-14-2026
# CSC 321
# Lab 12 : Calculate Areas of a Circle and Rectangle
import math
def rectCalc(base, height):
    x = base * height;
    return x

def circCalc(radius):
    c = math.pi * (radius ** 2)
    return c

b = int(input("Enter the base of your Rectangle: "))
h = int(input("Enter the height of your Rectangle: "))
c = float(input("Enter the radius of the Circle: "))

rectArea = rectCalc(b,h)
circArea = circCalc(c)

print("Area of the rectangle is:", rectArea)


print("Area of the Circle is:", circArea)



