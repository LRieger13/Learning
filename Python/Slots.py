import random
'''
AUTHOR: Leah Rieger
DATE: November 8th
PROGRAM: Slots!
'''

#Declare

player = str(input("Players name?\n"))
pocket = 100
bet = 0
randNum = 0

aryList = ["Cherries", "Oranges", "Plums", "Melons", "Bars"]

#Processing

print("Welcome to the slots game! Press 0 to leave. Bet minimum is $25.")

while pocket > 0: #while the pocket has money

    bet = int(input("Place your bets!\n"))
    print("Spin. That. Wheel! \n")
    if pocket == 0:
        print("No more left to bet.\n")
        break
    if bet < 25:
        print("Bet too low. Minimum is $25.\n")
        break
    while bet > pocket: #if they outbid their pocket amt
        print("Your bet is greater than what you have in pocket.\n")
        print("Try a new bet: \n")
        bet = int(input("Place your bets!\n"))
        
    x = random.randint(0, 4) 
    y = random.randint(0, 4) 
    z = random.randint(0, 4)
    
    print(aryList[x], aryList[y], aryList[z])
    
#if no fruit match = lost bet; if 2 fruit match = + 25; if all 3 match + 75;
    
    if x != y and x != z:
        pocket -= bet
        print("                                      ")
        print("You lost! Your new pocket amount is: $" + str(pocket))
    elif x == y and x == z:
        pocket += 75
        print("                                      ")
        print("You won $75! Your new pocket amount is: $" + str(pocket))
    elif x == y and x != z or y == z and y != x or z == x and z != y:
        pocket += 25
        print("                                      ")
        print("You won $25! Your new pocket amount is: $" + str(pocket))
        


#Output
