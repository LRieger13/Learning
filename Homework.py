'''
AUTHOR: Leah Rieger
Sept 27
PROGRAM: Hot Dog Cookout Calc
'''

HOTDOGS = 10
BUNS = 8
minHotDogs = float
minBuns = float
leftDogs = float
leftBuns = float
totalHotDogs = float

people = int(input("How many people are going to attend? \n"))

eat = int(input("How many hot dogs per person? \n"))

totalHotDogs = (people * eat)
minHotDogs = totalHotDogs / 10
minBuns = totalHotDogs / 8
leftDogs = totalHotDogs % 10
leftBuns = totalHotDogs % 8

print("Your minimum number of hot dogs needed is: " + str(minHotDogs))
print("Your minimum number of hot dog buns needed is: " + str(minBuns))
print("=====================================================================")
print("The number of hot dogs left over is: " + str(leftDogs))
print("The number of hot dog buns left over is: " + str(leftBuns))
