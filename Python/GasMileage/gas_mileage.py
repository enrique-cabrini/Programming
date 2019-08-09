#! /usr/bin/env python3
# This program calculates the mileage of a car

# define some variables
total_gallons_used = 0
total_miles_driven = 0

gallons_used = float( input( "Enter the gallons used ( -1 to end ): " ) ) # Prompt user for input

# Use a loop to get miles driven and calculate miles per gallon
while gallons_used != -1:
    miles_driven = int( input( "Enter the miles driven: " ) ) # Prompt user for input

    # Calculate and print the miles per gallon
    miles_per_gallon = miles_driven / gallons_used
    print( "The miles / gallon for this tank was {:.6f}".format( miles_per_gallon ) )

    total_gallons_used += gallons_used # Add gallons_used to total_gallons_used
    total_miles_driven += miles_driven # Add miles_driven to total_miles_driven

    gallons_used = float( input( "Enter the gallons used ( -1 to end ): " ) ) # Prompt user for input

# Calculate and print the total mpg
if total_gallons_used > 0:
    total_miles_per_gallon = total_miles_driven / total_gallons_used
    print( "The overall average miles / gallon was {:.6f}".format( total_miles_per_gallon ) )
else:
    print( "Nothing was inputted." )
    print( "The overall average miles / gallon is 0" )
