import simplegui
# define global variables
tenth_of_sec=0
successful_clicks=0
total_clicks=0
check=True

# define helper function format that converts time
# in tenths of seconds into formatted string A:BC.D
def format(t):
    A=0
    B=0
    C=0
    D=0
    BC=0
    D=t%10
    BC=t//10
    if BC>60:
        A=BC//60
        BC=BC%60
    if BC<10:
        B=0
        C=BC
    else:
        B=BC//10
        C=BC%10
    return str(A)+":"+str(B)+str(C)+"."+str(D)
    
# define event handlers for buttons; "Start", "Stop", "Reset"
def start():
    global check
    check=True
    timer.start()
    
def stop():
    timer.stop()
    global successful_clicks
    global total_clicks
    global check
    if check==True:
        total_clicks+=1
        time=format(tenth_of_sec)
        if time[-1]=='0':
            successful_clicks+=1
    check=False
    
    
def reset(): 
    global successful_clicks
    global total_clicks
    global tenth_of_sec
    successful_clicks=0
    total_clicks=0
    timer.stop()
    tenth_of_sec=0
    format(tenth_of_sec) 


# define event handler for timer with 0.1 sec interval
def tick():
    global tenth_of_sec
    tenth_of_sec += 1
    format(tenth_of_sec) 

# define draw handler
def draw(canvas):
    global successful_clicks
    global total_clicks
    score=str(successful_clicks)+"/"+str(total_clicks)
    time=format(tenth_of_sec)
    canvas.draw_text(time,[75,100],30,"white")
    canvas.draw_text(score,[160,20],25,"blue")
# create frame
frame=simplegui.create_frame("Timer",200,200)

# register event handlers
frame.add_button("START",start,100)
frame.add_button("STOP",stop,100)
frame.add_button("RESET",reset,100)
timer=simplegui.create_timer(100,tick)
frame.set_draw_handler(draw)

# start frame
frame.start()

