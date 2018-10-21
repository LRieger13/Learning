#import random
'''

AUTHOR: Leah Rieger
Oct 18th
PROGRAM: 


# Creating a FOR LOOP that prints 6 numbers
#for i in range(6):
    #print(i)
    
#Our first array
randNum = 0
aryList = ["cherries", "apples", "plums", "bells", "melons", "bars"]
#print(aryList) PRINTS THE ARRAY AS IT IS ^
randNum = random.randint(0, 5)
print(aryList[randNum])
            #print(aryList[6])<- INDEX ERROR, list out of range

#for i in range(6):
   # print(aryList[i]) #prints each element of the array

#use random number to display an array

'''

#aryFill = [] #create an array which is empty
#for i in range(6):
  #  aryFill.append(i) #put 6 numbers into an array

#for i in range(6):

#   print(aryFill[i])


'''
create a program that allos the user to enter a 5 scores and stores them into
an array
'''

scores = []

for i in range(5):
    score = input("Enter in score " + str(i+1) + ">> ")
    scores.append(score)
for i in range(5):
    print (scores[i])
    
