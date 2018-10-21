'''
AUTHOR: Leah Rieger
Oct 11th
PROGRAM: For Loops
'''

#Main

totalScore = 0
avg = 0.0
anotherStudent = "y"

while (anotherStudent == "y"):
    numGrade = int(input("What is the number of grades you will enter? \n"))

    for i in range(numGrade):
        grades = int(input("Grade: "))
        totalScore += grades
    print(totalScore)
    anotherStudent = input("Do you have any more?")
print("Yay! My students are great!")

#Print


