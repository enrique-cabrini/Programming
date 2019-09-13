#! /usr/bin/env python3
# This program determines if a number is perfect

# Function to determine if a number is perfect
def perfect( number ):
    sum = 0 # Define a variable
    # For every number from 1 to number
    for counter in range( 1, number ):
        # If counter is a factor of number
        if number % counter == 0:
            sum += counter # Add counter to sum

    # If sum equals number
    if number == sum:
        return True # Return True to caller
    else: # Otherwise
        return False # Return False to caller


# Function to print the factors of a number in a straight line
def print_factor( number ):
    # For every number from 1 to number
    for counter in range( 1, number ):
        # If counter is a factor of number
        if number % counter == 0:
            print( counter, end = " " ) # Print the factors
    print() # Print newline


# For every number from 1 to 1000
for counter in range( 1, 1001 ):
    # If function perfect returns True
    if perfect( counter ) == True:
        print( "{} is a perfect number.".format( counter ) ) # Print the result
