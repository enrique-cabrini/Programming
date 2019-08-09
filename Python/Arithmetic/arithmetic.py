#! /usr/bin/env python3
# This program performs some arithmetic operations on user defined numbers

# Prompt user for input
x = int( input( "Enter a number: " ) )
y = int( input( "Enter second number: " ) )

# Perform calculations
sum = x + y
difference = x - y
quotient = x / y
product = x * y

# Print results
print( "The sum is {}".format( sum ) )
print( "The difference is {}".format( difference ) )
print( "The quotient is {}".format( quotient ) )
print( "The product is {}".format( product ) )
