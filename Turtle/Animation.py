from turtle import *
import random
import time
'''
AUTHOR: Leah Rieger
DATE: 11/17/18
PROGRAM: Animaation
'''

tom = Turtle()
colors = ["firebrick", "midnight blue", "dark green"]
background = ["lavender", "light steel blue", "slate gray"]
def music(): #background music
    import winsound

    winsound.PlaySound('whitechristmas', winsound.SND_ASYNC)


def start(): #pen settings
    tom.shape("turtle")
    tom.screen.bgcolor("black")
    tom.color("firebrick")
    tom.speed(1)
    tom.pensize(4)
    
def branch(): #drawing
#https://projects.raspberrypi.org/en/projects/turtle-snowflakes/7
#website gave me a starting point for how to draw a snowflake   
    for i in range(10):
        for i in range(2):
            tom.forward(150)
            tom.right(60)
            tom.forward(150)
            tom.right(120)
            tom.stamp()
        tom.right(36)
        tom.color(random.choice(colors))
        tom.screen.bgcolor(random.choice(background))

def looping(): #continuous drawing; resets screen to start over
    #
    for i in range(8):
        branch()
        tom.left(45)
        tom.penup()
        time.sleep(1)
        tom.clearstamps()
        time.sleep(3)
        tom.reset()
        tom.color("firebrick")
        tom.pensize(5)
        tom.speed(1)
    
music()
start()
looping()

