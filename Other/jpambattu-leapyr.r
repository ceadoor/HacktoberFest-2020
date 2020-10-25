# PROGRAM-NAME : Leap Year Calculation
# By Joseph Pious
# PROGRAM-CODE :

 year = as.integer(readline(prompt="Enter a year: "))
if((year %% 4) == 0) {
if((year %% 100) == 0) {
if((year %% 400) == 0) {
print(paste(year,"is a leap year"))
} else {
print(paste(year,"is not a leap year"))
}
} else {
print(paste(year,"is a leap year"))
}
} else {
print(paste(year,"is not a leap year"))
}
