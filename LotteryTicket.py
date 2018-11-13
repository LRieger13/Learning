import random
import time
'''
AUTHOR: Leah Rieger
DATE: 11/11/2018
PROGRAM: Lottery Ticket
'''

#Declare
lottery = []

def main():
    getName()
    randomNum()
    ticket = createLotteryTicket()
    displayLotteryTicket(ticket)

def getName():
    name = input("Welcome to the Lottery Draw! What is your name?\n")
    print(f"Hello {name}! Lets play! \n")



#Processing

def randomNum():
    randNum = random.randint (0, 100)
    return str(randNum)

def createLotteryTicket():
    
    for i in range(0, 5):
        lottery.append(randomNum())

    return lottery

#Output
   
def displayLotteryTicket(paramList):
    print("The winning numbers are: ")
    print("                              ")
    print('\n'.join(paramList))
    
main()
