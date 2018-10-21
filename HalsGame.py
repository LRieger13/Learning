import random
'''
AUTHOR: Leah Rieger
DATE:  October 21st, 2018
PROGRAM: Hal's Game
'''

#INPUT  --  Original guess var/new guess var to limit scope of guess


halGuessLower = 1
halGuessHigher = 100
halGuess = 0     #hals random generator
totalGuess = 1   #accumulator

name = str(input("What is your name? \n"))
print("Hello " + name + "! My name is Hal! Care to play a game?")

print("Choose a number between 1 and 100, and I shall try to guess it!")
num = int(input("Enter your chosen number: \n"))


#PROCESSING  --  Add into if statements new guess var for new scope limits

while (halGuess != num):
    halGuess = random.randint(halGuessLower, halGuessHigher)
    totalGuess += 1
    if(halGuess < num): #halGuess needs to be higher 
        print("Hal's guess is: " , halGuess , "\n")
        print("Hal's guess is too low! \n")
        halGuessLower = halGuess                    #make halGuess the new low
        
    elif(halGuess > num): #halGuess needs to be lower
        print("Hal's guess is: " , halGuess , "\n")
        print("Hal's guess is too high! \n")
        halGuessHigher = halGuess                   #make halGuess the new high
        
    else:
        print("Hal's guess is: " , halGuess , "\n")
        print("Hal GUESSED IT!")
        

#OUTPUT  --  printing the amount of times it took to guess number
print("It took Hal, " + str(totalGuess) + " tries!")


