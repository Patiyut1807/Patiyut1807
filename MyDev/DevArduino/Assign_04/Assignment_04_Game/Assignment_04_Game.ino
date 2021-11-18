#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define controllers A3
#define int fall 0
#define int fly 1
const int MAX_WIDTH = 111;
struct Ball
{
    int pos_X = 62;
    int pos_Y = 1;
    int vec_X = 0;
    int vec_Y = 0;
} ball;
struct Bar
{
    int origin;
    int end;
} bar;

Adafruit_SSD1306 display = Adafruit_SSD1306(128, 32, &Wire);

int bounce_check = 0;

void setup()
{
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    randomSeed(millis());
}

void loop()
{
    bar.origin = alogRead(controllers);
    bar.origin = MAX_WIDTH - map(bar.origin, 0, 1023, 0, MAX_WIDTH);
    bar.end = bar.origin + 17;
    if (ball.pos_Y >= 31 && (ball.pos_X >= bar.origin && ball.pos_X <= (bar.end)))
    {
        ball.vec_Y = fly;
        if (bounce_check == 0)
        {
            ball.vec_X = rand() % 2;
            bounce_check = 1;
        }
    }
    else if (ball.pos_Y == 0)
        ball.vec_Y = fall;
    else if (pos_Y == 33 && (pos_X < bar_pos || pos_X > (bar_pos + 17)))
    {
        pos_Y = -10;
        pos_X = 62;
        vec_ball_X = NULL;
        i = 0;
    }

    pos_Y = (vec_ball_Y == 0) ? pos_Y + 1 : pos_Y - 1;

    if (pos_X == 1)
        vec_ball_X = 1;
    else if (pos_X == 127)
        vec_ball_X = 0;

    if (vec_ball_X == 0)
        pos_X--;
    else if (vec_ball_X == 1)
        pos_X++;

    display.clearDisplay();
    display.drawRect(bar_pos, 30, 18, 1, WHITE);
    display.fillCircle(pos_X, pos_Y, 1, WHITE);
    display.display();
}
