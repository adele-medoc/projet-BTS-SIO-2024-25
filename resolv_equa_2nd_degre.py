from math import *

a = float(input("Saisir a : "))
b = float(input("Saisir b : "))
c = float(input("Saisir c : "))

delta = delta = (b*b)-(4*a*c)

if delta < 0:
    print("Aucune solution dans R ")
if delta == 0:
    x = (-b) / (2*a)
    print("une solution dans R. x1 vaux : ", x) 
if delta > 0:
    x1 = ((-b) + sqrt(delta))/(2*a)
    x2 = ((-b) - sqrt(delta))/(2*a)
    print ("2 solutions dans R, x1 = ",x1, "x2 = ",x2)