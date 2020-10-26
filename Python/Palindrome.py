# PROGRAM NAME: Palindrome
# BY sruthi s
# PROGRAM CODE: function which return reverse of a string
 

def isPalindrome(s):

    return s == s[::-1]
 
 
# Driver code

s = "malayalam"

ans = isPalindrome(s)
 

if ans:

    print("Yes")

else:

    print("No")
