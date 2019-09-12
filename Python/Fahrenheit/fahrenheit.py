#! /usr/bin/env python3
# This program converts degrees celcius to degrees fahrenheit

# Function to convert celcius to fahrenheit
def fahrenheit( celcius ):
    deg_fahrenheit = 9/5 * celcius + 32 # Convert celcius to fahrenheit
    return deg_fahrenheit # return fahrenheit

print( "Celcius\t|\tFahrenheit" ) # Print the header

# For every number between 0 and 100 inclusive
for counter in range( 0, 101 ):
    print( "{}\t|\t{:.1f}".format( counter, fahrenheit( counter ) ) ) # Print the result
