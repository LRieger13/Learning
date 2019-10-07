'''
AUTHOR: Leah Rieger
Sept 27
PROGRAM: In Class, Budget & Shipping
'''


weight = float(input("Enter your weight amount: \n"))



if(weight <= 2):
    rate = float(1.10)
    totalCharges = float(weight * rate)
    print("Your shipping charge is $" + str(totalCharges))

if(weight > 2) and (weight < 6) :
    rate = float(2.20)
    totalCharges = float(weight * rate)
    print("Your shipping charge is $" + str(totalCharges))

if(weight > 6) and (weight < 10) :
    rate = float(3.70)
    totalCharges = float(weight * rate)
    print("Your total is $" + str(totalCharges))

if(weight > 10):
    rate = float(3.80)
    totalCharges = float(weight * rate)
    print("Your total is $" + str(totalCharges))

