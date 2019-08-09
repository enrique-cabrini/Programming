#! /usr/bin/env python3
# This program determines if a number is a palindrome or note

# Define some variables
first_number = 0
digit = 0
temp_number = 0
divisor = 10000
remainder = 0
second_number = ""

first_number = int( input( "Enter a five digit number: " ) ) # Prompt user for input
temp_number = first_number # assign the value of first_number to temp_number

# Separate digits and append them to second_number in a loop
for character in str( first_number ):
    digit = int( temp_number / divisor ) # Get first digit
    remainder = temp_number % divisor # Get remainder
    temp_number = remainder # Set temp_number to remainder
    divisor /= 10 # divide divisor by 10

    second_number += str( digit ) # append digit to second_number

# Check if second number and first number are equal
if second_number[::-1] == str( first_number ):
    print( "{} is a palindrome.".format( first_number ) ) # Print a message
else: # if second number and first number are not equal
    print( "{} is not a palindrome.".format( first_number ) ) # Print a message
