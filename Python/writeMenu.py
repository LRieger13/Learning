'''
AUTHOR: Leah Rieger
DATE: November 27, 2018
PROGRAM: writing to a file

'''

menuList = [['S', ' Yellow' ,' 10.95'],['M', ' Green', ' 11.92'],['L', ' Black', ' 12.95']]

write_file = open("menu.txt", "w")

write_file.write("What would you like to order? \n")
for item in menuList:
    menuLine = f"{item[0]},{item[1]},{item[2]}\n"
    print(menuLine)
    write_file.write(menuLine)

write_file.close()
