# Implementation of classic arcade game Pong

import simplegui
import random

# initialize globals - pos and vel encode vertical info for paddles
WIDTH = 600
HEIGHT = 400       
radius = 20
PAD_WIDTH = 8
PAD_HEIGHT = 80
HALF_PAD_WIDTH = PAD_WIDTH / 2
HALF_PAD_HEIGHT = PAD_HEIGHT / 2
paddle1_pos=0
paddle2_pos=0
score1=0
score2=0
ball_vel=[0.0,0.0]
ball_pos=[WIDTH/2, HEIGHT/2]
paddle1_vel=0
paddle2_vel=0
white_image = simplegui.load_image("http://commondatastorage.googleapis.com/codeskulptor-assets/week5-triangle.png")
# helper function that spawns a ball by updating the 
# ball's position vector and velocity vector
# if right is True, the ball's velocity is upper right, else upper left
def ball_init(right):
    global ball_pos, ball_vel # these are vectors stored as lists
    if right==True:
        ball_vel=[3,3]
    else:
        ball_vel=[-3,3]
    ball_pos=[WIDTH/2, HEIGHT/2]

# define event handlers

def new_game():
    global paddle1_pos,paddle2_pos, paddle1_vel, paddle2_vel,ball_vel,ball_pos  # these are floats
    global score1, score2  # these are ints
    score1=0
    score2=0
    paddle1_pos=HEIGHT/2-PAD_HEIGHT/2
    paddle2_pos=HEIGHT/2-PAD_HEIGHT/2
    if random.randrange(100)%2==1:
        ball_init(True)
    else:
        ball_init(False)

def draw(c):
    global paddle1_pos,paddle2_pos,score1, score2, paddle1_vel, paddle2_vel, ball_pos, ball_vel
    # update paddle's vertical position, keep paddle on the screen
    paddle1_pos+=paddle1_vel
    paddle2_pos+=paddle2_vel
    if paddle1_pos<0:
        paddle1_pos=0
    if paddle1_pos>HEIGHT-PAD_HEIGHT:
        paddle1_pos=HEIGHT-PAD_HEIGHT
    if paddle2_pos<0:
        paddle2_pos=0
    if paddle2_pos>HEIGHT-PAD_HEIGHT:
        paddle2_pos=HEIGHT-PAD_HEIGHT
        
   # update ball        
    ball_pos[0] += ball_vel[0]
    ball_pos[1] += ball_vel[1]
    if ball_pos[0] <= radius+PAD_WIDTH:
        if ball_pos[1] >=paddle1_pos and ball_pos[1]<=paddle1_pos+PAD_HEIGHT:
            ball_vel[0] = - ball_vel[0]*1.1
            ball_vel[1] = ball_vel[1]*1.1
        else:
            score1=score1+1
            if random.randrange(100)%2==1:
                ball_init(True)
            else:
                ball_init(False)
    if ball_pos[0] >= WIDTH-PAD_WIDTH-radius:
        if ball_pos[1] >=paddle2_pos and ball_pos[1]<=paddle2_pos+PAD_HEIGHT:
            ball_vel[0] = - ball_vel[0]*1.1
            ball_vel[1] = ball_vel[1]*1.1
        else:
            score2=score2+1
            if random.randrange(100)%2==1:
                ball_init(True)
            else:
                ball_init(False)
    if ball_pos[1] <= radius:
        ball_vel[1] = - ball_vel[1]
    if ball_pos[1] >= HEIGHT-radius:
        ball_vel[1] = - ball_vel[1]
        
    # draw mid line and gutters
    c.draw_line([WIDTH / 2, 0],[WIDTH / 2, HEIGHT], 1, "White")
    c.draw_line([PAD_WIDTH, 0],[PAD_WIDTH, HEIGHT], 1, "White")
    c.draw_line([WIDTH - PAD_WIDTH, 0],[WIDTH - PAD_WIDTH, HEIGHT], 1, "White")
    
    # draw paddles
    c.draw_polygon([(PAD_WIDTH-4,paddle1_pos), (PAD_WIDTH-4, paddle1_pos+PAD_HEIGHT)], PAD_WIDTH, "White")
    c.draw_polygon([(WIDTH -PAD_WIDTH+4,paddle2_pos), (WIDTH - PAD_WIDTH+4, paddle2_pos+PAD_HEIGHT)], PAD_WIDTH, "White")
    
    # draw ball and scores
    c.draw_circle(ball_pos, radius, 2, "red", "red")
    c.draw_text(str(score2), (150, 50), 25, "Red")
    c.draw_text(str(score1) ,(450, 50), 25, "Red")
        
def keydown(key):
    global paddle1_vel, paddle2_vel
    if key==simplegui.KEY_MAP["down"]:
        paddle2_vel=3
    if key==simplegui.KEY_MAP["up"]:
        paddle2_vel=-3
    if key==simplegui.KEY_MAP["s"]:
       paddle1_vel=3
    if key==simplegui.KEY_MAP["w"]:
       paddle1_vel=-3
    
    
   
def keyup(key):
    global paddle1_vel, paddle2_vel
    if key==simplegui.KEY_MAP["down"]:
        paddle2_vel=0
    if key==simplegui.KEY_MAP["up"]:
        paddle2_vel=0
    if key==simplegui.KEY_MAP["s"]:
       paddle1_vel=0
    if key==simplegui.KEY_MAP["w"]:
       paddle1_vel=0
def button_handler():
    new_game()


# create frame
frame = simplegui.create_frame("Pong", WIDTH, HEIGHT)
frame.set_draw_handler(draw)
frame.set_keydown_handler(keydown)
frame.set_keyup_handler(keyup)
frame.add_button("New Game",button_handler)

new_game()
# start frame
frame.start()

