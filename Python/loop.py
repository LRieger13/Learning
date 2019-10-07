'''

AUTHOR: Leah Rieger
Sept 25
PROGRAM: Loops

'''

'''
counter = 0
while (counter < 5):
    print(counter)
    counter = counter + 1
print ("All Done!")
'''

#sentinal, flag

#flag = False

#while flag == False;
    #print("This flag is false")
    #flag = True

numTimes = 0;
playAgain = 'y'
while playAgain == 'y' or playAgain == 'Y':
    print("Your are inside the loop!")
    playAgain = input("Do you want to play again?\n")
    playAgain = playAgain.lower();


print ("Thank you for playing")
print("You looped ", numTimes, " times!")
