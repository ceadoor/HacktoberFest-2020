# PROGRAM-NAME : Leap Year Calculation
# By Joseph Pious
# PROGRAM-CODE :

year = int(input("Enter a year: "))
# To get year (integer input) from the user

if (year % 4) == 0:
   if (year % 100) == 0:
       if (year % 400) == 0:
           print("{0} is a leap year".format(year))
       else:
           print("{0} is not a leap year".format(year))
   else:
       print("{0} is a leap year".format(year))
else:
   print("{0} is not a leap year".format(year))
