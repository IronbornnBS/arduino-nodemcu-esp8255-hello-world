#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  display.display();
  delay(1000);

  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(BLACK, WHITE);
  display.setCursor(0, 0); 
  display.println("-------Arduino-------");
  display.display(); 
  delay(2000);

  display.setTextSize(1.8);
  display.setTextColor(WHITE);
  display.setCursor(26, 24); 
  display.println("Hello World");
  display.display(); 
  delay(2000);

  display.setTextSize(1);
  display.setTextColor(BLACK, WHITE); 
  display.setCursor(26,35); 
  display.println("Hello World");
  display.display();
  delay(2000);

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 54); 
  display.println("-------Arduino-------");
  display.display(); 
  delay(2000);
}

void loop() {}