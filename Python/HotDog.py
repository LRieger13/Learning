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

minHotDogs = (totalHotDogs / 10)
minBuns = (totalHotDogs / 8)

leftDogs = totalHotDogs % 10
leftBuns = totalHotDogs % 8



print("Your minimum number of hot dog packages needed is: " + str(minHotDogs))
print("Your minimum number of hot dog bun packages needed is: " + str(minBuns))
print("=====================================================================")
print("The number of hot dogs left over is: " + str(leftDogs))
print("The number of hot dog buns left over is: " + str(leftBuns))


#MALARKY WAY OF DOING THIS::

#numPeople = int
#numPeople = int(input ("Number of people: "))
#bunPackages = int(numPeople / BUNS)
#remainingBuns = numPeople % BUNS)
#if (remainingBuns > 0):
#   bunPackages += 1
#print(bunPackages, " packages of buns")
#if (reainingBuns != 0):
#   print(BUNS - remainingBuns, " buns left over")
#hdogPackage = int(numPeople / HOTDOGS)
#remainingHotDogs = numPeople % HOTDOGS
#if (remainingHotDogs > 0):
#   hdogPackage += 1
#print(hdogPackage, " packages of hot dogs")
#if (HOTDOGS - remainingHotDogs, " hot dogs left over")

