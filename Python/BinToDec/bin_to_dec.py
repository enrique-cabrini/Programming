#! /usr/bin/env python3
# This program converts a binary number to a decimal number

# Define variables
binary_number = 0
decimal_number = 0
temp_number = ""
digit = 0
divisor = 1
remainder = 0
multiplier = 1

binary_number = int( input( "Enter a binary number: " ) ) # Prompt user for input

temp_number = str( binary_number )[::-1] # Assign the reverse value of binary_number to temp_number

# Use a loop to find the value of divisor
for character in temp_number:
    divisor *= 10

divisor = int( divisor / 10 ) # Assign divisor to the integer result of divisor divided by 10

# Use a loop to separate the digits in temp_number and convert them to decimal
for character in temp_number:
    digit = int( temp_number ) // divisor
    remainder = int( temp_number ) % divisor
    temp_number = remainder
    divisor /= 10

    decimal_number += digit * multiplier # add digit times multiplier to decimal_number
    multiplier *= 2 # Multiply multiplier by by

print( "{} to decimal is {}".format( binary_number, decimal_number ) )
