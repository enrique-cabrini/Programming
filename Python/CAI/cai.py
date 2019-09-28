# This program helps an elementary school student learn multiplication

import random # import the random module

# Define global variables
number_1 = 0
number_2 = 0
user_guess = 0

# Function to generate a random number
def generate_number():
    number = random.randrange( 1, 10 ) # Generate a random number
    return number # return the number to the caller

# Function to get user input
def get_user_guess():
    # Get user input
    number = int( input( "What is {} times {} (Enter -1 to exit)? ".format( number_1, number_2 ) ) )
    return number # Return user input

# Function to begin program execution
def main():
    # Specify scope of variables
    global number_1
    global number_2
    global user_guess

    number_1 = generate_number() # Assign a random number to number_1
    number_2 = generate_number() # Assign a random number to number_2
    user_guess = get_user_guess() # Get user input

    # While user does not enter -1
    while user_guess is not -1:
        if user_guess == number_1 * number_2: # If user_guess is the product of number_1 and number_2
            print( "Very good!" ) # Print a message
            number_1 = generate_number() # Assign a different random number to number_1
            number_2 = generate_number() # Assign a different random number to number_2
            user_guess = get_user_guess() # Get user input
        else: # Otherwise
            print( "No. Please try again." ) # Print a message
            user_guess = get_user_guess() # Get user input

main() # Call function to begin program execution
