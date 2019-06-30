'''
AUTHOR: Leah Rieger
DATE: November 27, 2018
PROGRAM: homework

'''

menuList = [['S', ' Yellow' ,' 10.95'],['M', ' Green', ' 11.92'],['L', ' Black', ' 12.95']]

def start():
    print("What would you like to order?\n")


def menu():
    for item in menuList:
       menuLine = f"{item[0]},{item[1]},{item[2]}\n"
       print(menuLine)   

start()
menu()
