#include "functions.h"

int ch = current_emotion;

void setup() {
  // put your setup code here, to run once:
  restart_face();
  Serial.begin(115200);
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
  String s = Serial.readStringUntil('\n');
  int pat = analys_s(s);
  //  int pat = Serial.parseInt();
//  Serial.print("pat = ");
//  Serial.println(pat);
  if (pat < 0) {
    pat = pat * -1;
    switch (pat) {
      case 7:
        Serial.println("enter intensity");
        while (!Serial.available());
        change_intensity(Serial.parseInt());
        Serial.print("intensity set at ");
        Serial.println(intensity);
        break;
    }
  }
  else if (pat > 0) {
    ch = pat;
    if (flash_light) {
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
    else if (ch <= 127) {
      current_emotion = ch;
    }
  }
  //    delay(100);
}
