#! /usr/bin/env python3
# This program estimates the value of constant e to the power x

# Declare variables
napiers_number = 1
limit = 0
factorial = 1
x = 0

limit = int( input( "Enter the accuracy: " ) ) # Read limit from user

x = int( input( "Enter x: " ) ) # Read x from user

# Use a for loop to calculate e^x
for number in range( 1, limit ):
    factorial *= number
    napiers_number += x ** number / factorial

# Print the result
print( "E to the power {} to the {} position is {}".format( x, limit, napiers_number ) )
