# PROGRAM-NAME : Guess Game
# By Tintu
# PROGRAM-CODE :


import random

def guess(val,x):
	while ((val-x)!=0):
		dif=val-x
		if(dif>0):
			print("Number is greater than guessed")
		else:
			print("Number is less than guessed")
		x=int(input("Gues another number: "))
	print("You guessed right!!!")
val=int(random.randrange(1,1000))
x=int(input("Guess a number between 1 & 1000: "))
if (val==x):
	print("You guessed right!!!")
else:
	guess(val,x)
