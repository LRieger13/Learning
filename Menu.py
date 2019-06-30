def main():
    displayMenu()

def getName():
    name = input("What is your name? ")
    #print("Hello, " + name + "!")
    return name

def displayMenu():
    userName = getName()
    print("1. Play a video game? ")
    print("2. Go see a movie? ")
    toDo = int(input(f"Hello {userName}, what would you like to do today? "))
    
    entertainMe(toDo, userName)

def entertainMe(doIt, theName):
    if (doIt == 1):
        print(f"{theName}, wouldn't you rather play outside? ")
    elif (doIt):
        print(f"{theName}, how about the movie Ferris Beuler? ")

main()