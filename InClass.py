'''
AUTHOR: Leah Rieger
Sept 27
PROGRAM: In Class, Budget & Shipping
'''

budget = int(input("Enter your budget amount: \n"))

expenses = int(input("Enter your expense amount: \n"))

totalLeft = budget - expenses

if(expenses > budget) :
               print("You have gone over budget by", + totalLeft)
elif(expenses < budget) :
               print("You have stayed under budget by", + totalLeft)
else :
               print("You have used your whole budget by", + totalLeft)

