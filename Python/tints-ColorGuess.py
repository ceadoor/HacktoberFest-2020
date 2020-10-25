# PROGRAM-NAME : Color Guess
# By Tintu
# PROGRAM-CODE :


import random

words = ['grey','black','red','pink','blue','peach','green','white']
val=random.choice(words)
x=int(len(val))
print(x)
for i in range (1,6):
	for j in range (1,x+1):
		print ('_',end="")
		word=input("Enter a character")
		if(word==val):
			print(word)
