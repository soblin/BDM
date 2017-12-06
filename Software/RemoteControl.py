# -*- coding: utf-8 -*-
import webiopi
webiopi.setDebug()
GPIO = webiopi.GPIO
UP = 18
DOWN = 17
LEFT = 3
RIGHT = 2

def setup():
    webiopi.GPIO.setFunction(UP, GPIO.OUT)
    webiopi.GPIO.setFunction(DOWN, GPIO.OUT)
    webiopi.GPIO.setFunction(LEFT, GPIO.OUT)
    webiopi.GPIO.setFunction(RIGHT, GPIO.OUT)
@webiopi.macro
def up():
    GPIO.digitalWrite(UP, GPIO.HIGH)
    GPIO.digitalWrite(DOWN, GPIO.LOW)
@webiopi.macro
def upup():
    GPIO.digitalWrite(UP, LOW)
@webiopi.macro
def down():
    GPIO.digitalWrite(DOWN, GPIO.HIGH)
    GPIO.digitalWrite(UP, GPIO.LOW)
@webiopi.macro
def downup():
    GPIO.digitalWrite(DOWN, LOW)
@webiopi.macro
def left():
    GPIO.digitalWrite(LEFT, GPIO.HIGH)
    GPIO.digitalWrite(RIGHT, GPIO.LOW)
@webiopi.macro
def leftup():
    GPIO.digitalWrite(LEFT, LOW)
@webiopi.macro
def right():
    GPIO.digitalWrite(RIGHT, GPIO.HIGH)
    GPIO.digitalWrite(LEFT, GPIO.LOW)
@webiopi.macro
def rightup():
    GPIO.digitalWrite(RIGHT, LOW)

def destroy():
    GPIO.digitalWrite(UP, LOW)
    GPIO.digitalWrite(DOWN, LOW)
    GPIO.digitalWrite(LEFT, LOW)
    GPIO.digitalWrite(RIGHT, LOW)
