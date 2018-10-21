import random

'''

AUTHOR: Leah Rieger
Oct 16th
PROGRAM: War Game

'''

#Declare
playerOneCard = 0
playerTwoCard = 0

playerOnePoints = 0
playerTwoPoints = 0

point = 1

print("Welcome to the game of WAR!\n")


#Processing
while (point < 10):
    playerOneCard = random.randint(1, 13)
    playerTwoCard = random.randint(1, 13)
    
    if(playerOneCard > playerTwoCard):
        playerOnePoints += 1
        print(playerOneCard, playerTwoCard, "\tPlayer One wins  " + str(playerOnePoints))
    elif(playerTwoCard > playerOneCard):
        playerTwoPoints += 1
        print(playerOneCard, playerTwoCard, "\tPlayer Two wins  " + str(playerTwoPoints))
    else:
        print("Tie!")

    if(playerOnePoints > playerTwoPoints):
        point = playerOnePoints
    else:
        point = playerTwoPoints
print("      ")
#Output
if(playerOnePoints > playerTwoPoints):
    print("Player One wins with " + str(playerOnePoints) + " points!\n")
else:
    print("Player Two wins with " + str(playerTwoPoints) + " points!\n")

    
