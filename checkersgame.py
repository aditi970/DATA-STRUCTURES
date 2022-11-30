import pyglet
from pyglet.window import key
from pyglet.window import mouse
from pyglet.window import gl

class checkers(pyglet.window.Window):

        blue = pyglet.resource.image('resources/blueSquare.bmp')
        red = pyglet.resource.image('resources/redSquare.bmp')
        blackP = pyglet.resource.image('resources/blackP.bmp')
        whiteP = pyglet.resource.image('resources/whiteP.bmp')
        spriteB = []
        spriteW = []
        screenWidth=600
        screenHeight=600
        x=None
        y=None
        w=None
        h=None
        def __init__(self):
            super(checkers, self).__init__(self.screenWidth,self.screenHeight,
            resizable=False,
            caption="Checkers",
            config=pyglet.gl.Config(double_buffer=True),
            vsync=False
            )
            platform = pyglet.window.get_platform()
            display = platform.get_default_display()
            screen = display.get_default_screen()

            self.x = 60
            self.y = 60
            self.red.width = self.x
            self.red.height = self.y
            self.blue.width = self.x
            self.blue.height = self.y
            self.blackP.height=self.y
            self.blackP.width = self.x
            self.whiteP.height = self.y
            self.whiteP.width=self.x
            self.h = self.red.height
            self.w = self.red.width
            self.x = (self.screenWidth - (self.w * 8)) / 2
            self.y = (self.screenHeight - (self.h * 8)) / 2

            for s in range(8):
                for i in range(4):
                    if s % 2 == 0:
                        self.spriteB.append(
                            pyglet.sprite.Sprite(self.blackP, i * 2 * self.w + self.x + self.w, s * self.h + self.y))
                        self.spriteW.append(
                            pyglet.sprite.Sprite(self.whiteP, i * 2 * self.w + self.x + self.w, s * self.h + self.y))
                    else:
                        self.spriteB.append(
                            pyglet.sprite.Sprite(self.blackP, i * 2 * self.w + self.x, s * self.h + self.y))

                        self.spriteW.append(
                            pyglet.sprite.Sprite(self.whiteP, i * 2 * self.w + self.x, s * self.h + self.y))
            for j in range(12,32):
                self.spriteW[j].visible = False
            for j in range(0,20):
             self.spriteB[j].visible = False

        def on_draw(self):
            self.clear()
            for s in range(8):
                for i in range(4):
                    if s % 2 == 0:
                        self.blue.blit(i * 2 * self.w + self.x, s * self.h + self.y)
                        self.red.blit(i * 2 * self.w + self.x + self.w, s * self.h + self.y)
                    else:
                        self.blue.blit(i * 2 * self.w + self.x + self.w, s * self.h + self.y)
                        self.red.blit(i * 2 * self.w + self.x, s * self.h + self.y)

            for i in range(32):
                self.spriteW[i].draw()
                self.spriteB[i].draw()

mygame=checkers()

pyglet.app.run()
