'''

AUTHOR: Leah Rieger
Oct 18th
PROGRAM: Capitilizer

'''

#Get usr input
#Manipulate input
#Output final product to usr

userWord = input("Enter a word here: \n")
currIndex = 0
modifiedWord = ''

for c in userWord:
    if(currIndex % 2 == 0):
        modifiedWord += c.lower()
    else:
        modifiedWord += c.upper()
    currIndex += 1

print(modifiedWord)
