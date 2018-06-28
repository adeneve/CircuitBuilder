from graphics import *
import _thread

CurrentPaths = [] # sets of points from pos to neg
def main() :
    win = GraphWin("CircuitBuilder", 500, 500)
    win.setBackground(color_rgb(255,255,255))
    board_width = 10
    board_height = 10
    holes = []
    spread = 30
    for i in range(0, board_width*spread, spread):
        for j in range(0, board_height*spread, spread):
            print(j)
            pt = Point(i, j)
            cir = Circle(pt, 2)
            cir.setFill(color_rgb(0,0,0))
            cir.draw(win)


    positiveRailColumn = board_width - 1
    groundColumn = board_width - 2

    for j in range(0, board_height*spread, spread):
        CurrentPaths.append([(board_width-1, j/spread),(board_width-2, j/spread)])
        pt = Point((board_width*spread)-spread, j)
        cir = Circle(pt, 2)
        cir.setFill(color_rgb(255,0,0))
        cir.draw(win)
    for i in CurrentPaths:
        print(i)

    while(1):
        win.getMouse()

main()
