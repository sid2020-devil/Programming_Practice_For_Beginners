import simplegui
import random
seceret_number=0
number_of_guess=0
range_num=1

# helper function to start and restart the game
def new_game():
    # initialize global variables used in your code here
    global seceret_number
    global number_of_guess
    global range_num
    seceret_number=0
    number_of_guess=0
    if range_num == 1:
        range100()
    else:
        range1000()

# define event handlers for control panel
def range100():
    # button that changes the range to [0,100) and starts a new game 
    global secret_number
    global number_of_guess
    global range_num
    range_num=1
    new_game
    secret_number = random.randrange(0,100)
    print
    print "================================="
    print "New game Number in range 0 to 100"
    number_of_guess=7
    print "Number of guess :" + str(number_of_guess)

def range1000():
    # button that changes the range to [0,1000) and starts a new game  
    global secret_number
    global number_of_guess
    global range_num
    range_num=2
    new_game
    secret_number= random.randrange(0,1000)
    print
    print "=================================="
    print "New game Number in range 0 to 1000"
    number_of_guess=10
    print "Number of guess :" + str(number_of_guess)
    
def input_guess(guess):
    # main game logic goes here
    guess_number=int(guess)
    global number_of_guess
    print
    print "Guess was:" + guess
    number_of_guess = number_of_guess-1
    print "Remaining number of guess :" + str(number_of_guess)
    
    if number_of_guess >= 0:
        if secret_number == guess_number :
            print "CORRECT!"
            new_game()
        elif secret_number > guess_number :
            print "HIGHER!"
        else :
            print"LOWER!"
    if number_of_guess == 0:
        print"Sorry! out of guess"
        print"Number is:"+str(secret_number)
        print" ###GAME OVER###"
        new_game()
       

    
# create frame
frame=simplegui.create_frame("Guess Number",200,200)

# register event handlers for control elements and start frame
frame.add_button("Range 0 to 100",range100,200)
frame.add_button("Range 0 to 1000",range1000,200)
inp=frame.add_input("Input guess",input_guess,100)


# call new_game 
new_game()
frame.start()

