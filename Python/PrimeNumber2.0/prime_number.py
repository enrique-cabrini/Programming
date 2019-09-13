#! /usr/bin/env python3
# This program determines if a number is a prime number

from math import sqrt # Import the sqrt function from the math module

# Function to determine if a number is prime
def prime( number ):
    # If number is greater than 1
    if number > 1:
        # For every number between 2 and the square root of number plus 1
        for counter in range( 2, number // 2 + 1 ):
            # If counter is a factor of number
            if number % counter == 0:
                break # Exit the loop
        else: # Otherwise
            return True # return True to the caller
    else: # Otherwise
        return False # return False to the caller

# For eveery number from 2 to 1000
for counter in range( 2, 1001 ):
    # If function prime returns True
    if prime( counter ) == True:
        print( "{} is a prime number.".format( counter ) ) # Print the result
