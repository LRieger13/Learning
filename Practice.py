'''
    Author: Leah Rieger
    Date: Sept 20
    Program: Calculate Commission Earned

'''

# Main Modules
'''
salesAmount = float
commissionRate = float
commissionEarned = float
'''
# Input Modules

print("Enter your total sales for the month: ")
salesAmount = float(input())
print(salesAmount)

#get the total commission rate (as a percentage):")
commissionRate = float(input("total commission rate (as a percentage):\n"))
print(commissionRate)

# Calculations Modules

commissionEarned = salesAmount * (commissionRate/100)


# Output Results
print("Your total commission earned is $", commissionEarned)
