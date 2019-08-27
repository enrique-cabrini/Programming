# This program determines if a set of three numbers is a Pythagorean triple

# Define variables
side_one = 0
side_two = 0
hypotenuse = 0

# For each value of hypotenuse from 1 to 20
for hypotenuse in range( 1, 21 ):
    # For each value of side_two from 1 to 20
    for side_two in range( 1, 21 ):
        # For each value of side_one from 1 to 20
        for side_one in range( 1, 21 ):
            # If side_one squared plus side_two squared equals hypotenuse squared
            if side_one ** 2 + side_two ** 2 == hypotenuse ** 2:
                # Print a message
                print( "{}, {}, and {} are a Pythagorean triple.".format(
                        side_one, side_two, hypotenuse ) )
