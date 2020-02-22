#include "functions.h"

int ch = current_emotion;

void setup() {
  // put your setup code here, to run once:
  restart_face();
  Serial.begin(9600);
  emotion_chooser(current_emotion);
  Serial.println("**ready**\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("**waiting..**\n");
  while (!Serial.available()) {
    if ( isBlinkable(ch)) {
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= interval) {
        // save the last time you blinked the LED
        previousMillis = currentMillis;
        emotion_chooser(131);
      }
    }
  }
  //  String s = Serial.readStringUntil('\n');
  ch = Serial.parseInt();
  if (ch != 0 ) {
    if (flash_light && ch != 1) {
      for (int j = 0; j < 6; j++)
        face.setIntensity(j, intensity);
      for (int j = 0; j < 6; j++)
        face.clearDisplay(j);
      flash_light = false;
    }
    Serial.println(ch);
    emotion_chooser(ch);
    if ( ch == 1) {
      flash_light = true;
    }
    else if (ch >= 2 && ch <= 127) {
      current_emotion = ch;
    }
    delay(100);
  }
}
