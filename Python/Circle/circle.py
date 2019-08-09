#! /usr/bin/env python3
# This program takes a radius and returns the circumference, diameter, and area
# of the circle

radius = int( input( "Enter the radius: " ) ) # read radius from user

# Print the diameter
print( "The diameter is: {}".format( radius * 2 ) )

# Print the circumference
print( "The circumference is: {}".format( 2 * 3.14159 * radius ) )

# Print the area
print( "The area is: {}".format( 3.14159 * radius ** 2 ) )
