'''

AUTHOR: Leah Rieger
Oct 2nd
PROGRAM: Calories Burned

'''

CAL = 4.2
time = 0
totalCal = 0

while (totalCal < 5):
    time += int(input("How many minuets did you run on the treadmill? \n"))
    totalCal = time * CAL
    print("Your total amount of calories burned was:", + totalCal)
