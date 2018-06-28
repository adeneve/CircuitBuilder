
class LED():
    pins = 2

    #orientation: default left pin is for ground right pin is for positive
    #right pin must come before left pin in the current path
    def draw(board_width, board_height, spread, X, Y, window, color):
        #if(X < 0 or X > (board_width/spread)-1): #raise exception
        pt = Point((X*spread)-(spread/2), (Y*spread)-(spread/2))
        diodeColor = color_rgb(0,0,0)
        if(isOn()):
            diodeColor = color
