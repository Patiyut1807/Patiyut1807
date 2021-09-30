#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
const int MAX_WIDTH = 111;
Adafruit_SSD1306 display = Adafruit_SSD1306(128, 32, &Wire);
int bar_pos, pos_Y = 1, pos_X = 62, vec_ball_Y = 0, vec_ball_X = 0, i = 0;
void setup() {
    display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
    randomSeed(millis());
}

void loop() {
    bar_pos = analogRead(A0);
    bar_pos = MAX_WIDTH - map(bar_pos, 0, 1023, 0, MAX_WIDTH);
    
    if (pos_Y >= 31 && (pos_X >= bar_pos && pos_X <= (bar_pos + 17))) { //ball+bar
        vec_ball_Y = 1;  
        if (i == 0) {
            vec_ball_X = rand()%2;
            i=1;
        }
    }
    else if (pos_Y == 0)vec_ball_Y = 0;
    else if (pos_Y == 33 && (pos_X < bar_pos || pos_X >(bar_pos + 17))) {
        pos_Y = -10;
        pos_X = 62;
        vec_ball_X = NULL;
        i = 0;
    }
    
    pos_Y = (vec_ball_Y == 0) ? pos_Y + 1 : pos_Y - 1;
    
    if (pos_X == 1)vec_ball_X = 1;
    else if (pos_X == 127)vec_ball_X = 0;
    
    if (vec_ball_X == 0)pos_X--;
    else if (vec_ball_X == 1)pos_X++;
    
    display.clearDisplay();
    display.drawRect(bar_pos, 30, 18, 1, WHITE);
    display.fillCircle(pos_X, pos_Y, 1, WHITE);
    display.display();

}
