
#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  delay(250); // 250ms = 0.25s
  Serial.println("ESP32 Touch Test!");
  pinMode(13, OUTPUT);   // PIN GTOP13 connect to LED
  digitalWrite(13, LOW); // PIN GTOP13 = OFF(0)
}

void loop()
{
  if (touchRead(T6) < 45)
  {
    Serial.print("Touch:");
    Serial.println(touchRead(T6)); // get value using T6
    digitalWrite(13, HIGH);        // PIN GTOP13 = ON(1)
  }
  else
  {
    Serial.print("Touch:");
    Serial.println(touchRead(T6)); // get value using T6
    digitalWrite(13, LOW);         // PIN GTOP13 = OFF(0)
  }
  delay(1000); // 1000ms = 1s
}