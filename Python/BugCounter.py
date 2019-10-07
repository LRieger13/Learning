'''

AUTHOR: Leah Rieger
Oct 2nd
PROGRAM: Calories Burned

------------------------------------
bugsPerDay = int
totBugs = int
days = 1


while(days <= 5):
    bugsPerDay = int(input("Enter your number of bugs caught today: \n"))
    days += 1
    totBugs += bugsPerDay 
print("Your total number of bugs caught is:", str(totBugs))
------------------------------------
'''

bugsPerDay = 0
totBugs = 0
numBugs = 0
days = 1

while(days <= 5):
    bugsPerDay = int(input("How many bugs were caught today? \n"))
    days += 1
    totBugs += bugsPerDay #accumulator
print("Total bugs collected:\t" + str(totBugs))
