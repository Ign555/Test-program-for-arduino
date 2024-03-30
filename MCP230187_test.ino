/*
MCP23017 test program

*/
#include <Wire.h>

void setup() {

  Wire.begin();
  Serial.begin(9600);
  Serial.print("setup end");
  Wire.beginTransmission(0x20);
  Wire.write(0x00);  // Control byte - Co = 0, D/C# = 0 (Command mode)
  Wire.write(0x00);  // Control byte - Co = 0, D/C# = 0 (Command mode)
  Wire.endTransmission();
}

void loop() {

  Wire.beginTransmission(0x20);
  Wire.write(0x12);  // Control byte - Co = 0, D/C# = 0 (Command mode)
  Wire.write(0x02);  // Control byte - Co = 0, D/C# = 0 (Command mode)
  Wire.endTransmission();
  delay(1000);

}
