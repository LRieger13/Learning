
'''
AUTHOR: Leah Rieger
DATE: November 27, 2018
PROGRAM: practice
'''



aryCourses = [['CIS130', '3', 'Spring'], ['CIS150', '3', 'Spring'], ['MTH110', '4', 'Spring'], ['CIS131','4', 'Javascript']]

#print (len(aryCourses))

'''for i in range(len(aryCourses)):
    print(aryCourses[i])
    for j in range(3):
        print(aryCourses[i][j])
'''

for course in aryCourses:
    #print(course)
    for i in range(len(course)):
        print(course[i])
