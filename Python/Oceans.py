'''
AUTHOR: Leah Rieger
Oct 4th
PROGRAM: Ocean Levels
'''

#Ocean Levels
# Constant for the rise per year.
RISE_PER_YEAR = 1.8

# Declare a variable to store the rise.
rise = 0.0

# Calculate and print value for the rise each year.
print ('Year\t\tRise (in millimeters)')
print ('------------------------------------------')

years = 0;
while (years < 25):
    rise += RISE_PER_YEAR
    #\t prints a tab
    print ((years + 1), '\t\t', rise)
    years += 1

