'''
    Author: Leah Rieger
    Date: Sept 20
    Program: Calculate Commission Earned

'''

# Main Mod
'''
females = int
males = int
totalStudents = int
percentFemales = float
percentMales = float
'''
# Input Mod

print("Enter your total amount of students in class: ")
totalStudents = int(input())

#get amount of females and males
print("Enter amount of females in class: ")
females = int(input())
print("Enter amount of males in class: ")
males = int(input())


# Calculation Mod

percentFemales = (females / totalStudents) * 100
percentMales = (males / totalStudents) * 100


# Output Results

print("Your total percentage of females in class is: ", percentFemales, "%")
print("Your total percentage of males in class is: ", percentMales, "%")
