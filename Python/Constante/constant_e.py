#! /usr/bin/env python3
# This program estimates the value of the math constant e

# Define variables
e = 1
limit = 0
factorial = 1;

limit = int( input( "Enter the limit of approximation: " ) ) # Read limit from user

# Use a loop to estimate the value of Euler's number
for number in range( 1, limit ):
    factorial *= number
    e += 1 / factorial

# Print the result
print( "The value if Euler's number e, to the {}th position is {}".format( limit, e ) )
