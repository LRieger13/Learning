import random

'''

AUTHOR: Leah Rieger
Oct 11th
PROGRAM: For Loops


anotherNum = 15
someNum = 5
#for i in range(someNum):
    #print(i)

for i in range(someNum, anotherNum, 3):
    #print(i)
    num = random.randint(1, 5)
    print(num)

You need to know which numbers you need
'''

totBugs = 0
for i in range (1, 6):
    bugs = random.randint(0, 50)
    #print(bugs)
    totBugs += bugs
    print(bugs, totBugs)
print("Total bugs seen", totBugs)
