# PROGRAM-NAME : Recursive iterative sum of numbers
# By Janus Jerom
# PROGRAM-CODE :
#

# Recursive method to calculate the sum of all numbers in a given array. 
  
def RecursiveSum(arrayofNumbers) 
  
  # Base Case: If the array is empty, return 0. 
  
  if arrayofNumbers? 
    return 0
  
  # Recursive code: Adding each element to the variable by calling the method. 
  
  else
    Sum = arrayofNumbers.pop  
    return Sum + RecursiveSum(arrayofNumbers) 
  end
end
  
RecursiveSum([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]) 
