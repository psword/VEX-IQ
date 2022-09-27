var1 = 0
var2 = 0

def move2():
    global var1, var2
    drivetrain.turn_for(LEFT, 90, DEGREES)
    drivetrain.drive_for(FORWARD, 50, MM)
    drivetrain.turn_for(RIGHT, 90, DEGREES)

def when_started1():
    global var1, var2
    var1 = 5
    var2 = 10
    drivetrain.set_turn_velocity(100, PERCENT)
    for repeat_count2 in range(15):
        for repeat_count in range(72):
            pen.set_pen_color(GREEN)
            pen.set_pen_width(THIN)
            pen.move(DOWN)
            drivetrain.turn_for(RIGHT, var1, DEGREES)
            drivetrain.drive_for(FORWARD, var2, MM)
            wait(5, MSEC)
        pen.move(UP)
        move2()
        var2 = var2 + 4.254
        wait(5, MSEC)
    stop_project()

vr_thread(when_started1)
