#include "LedControl.h"
#include "ante_definum.h"

unsigned long previousMillis = 0;
unsigned long currentMillis = 0;
int animation_speed = normal_speed;
int current_emotion = 4;
int intensity = 0;
int flash_light = false;

//ledcontrol
LedControl face = LedControl(12, 10, 11, 6); // DATA, CLK, CS, NO OF DISPLAYS
