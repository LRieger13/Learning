'''
AUTHOR: Leah Rieger
Oct 2nd
PROGRAM: Bug Collector
'''


bugs = 0
total = 0


while (total < 5):
    bugs += int(input("How many bugs did you catch today? \n"))
    total += 1

print("Total bugs collected: ", bugs)

