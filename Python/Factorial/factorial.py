#! /usr/bin/env python3
# This program finds the factorial of a user specified number

# Define variables
number = 0;
factorial = 0;
counter = 0;

number = int( input( "Enter a nonnegative integer: " ) ) # Read number from user

factorial = number # Assign the value of number to factorial

counter = number - 1 # Assign number minus 1 to counter

# If number is greater than 0
if number > 0:
    # Use a loop to calculate the factorial
    while counter >= 1:
        factorial *= number - counter
        counter -= 1; # Increment counter
elif number == 0: # If number if 0
    # Factorial is 1
    factorial = 1
else: # Otherwise
    print( "Invalid input." ) # Print an error message

print( "The factorial of {} is {}".format( number, factorial ) ) # Print the factorial
