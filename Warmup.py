'''
    Programmer: Leah Rieger
    Date: Sep 20
    Program: Intro to Programming

'''



name = "Leah Rieger"
greeting = "Good Morning "+ name
# greeting = greeting + " BOOM!"
greeting += " BOOM!"

print(greeting)

#*************** let's get input from user

print("What is your favorite animal?")
favAnimal = input()
print("My favorite animal is also a " + favAnimal)

#an alternative to the above input and prompt

favAnimal = input("What is your favorite animal?\n")
print("My favorite animal is also a " + favAnimal.lower())
