'''

AUTHOR: Leah Rieger
Oct 2nd
PROGRAM: Distance Traveled

'''


distance = int
hour = 1



speed = float(input("Enter the speed of the vehicle: \n"))
time = int(input("Enter the number of hours traveling: \n"))


print("Hour\tDistance Traveled")
print("========================")


while (hour <= time):
    distance = hour * speed
    print(hour, '\t', distance)
    hour+= 1
