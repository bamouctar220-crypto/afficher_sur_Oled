#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // adresse I2C typique
  display.clearDisplay();// efface l'écran
  display.setTextSize(1);// taille du texte
  display.setTextColor(WHITE);// couleur du texte
  display.setCursor(0, 0);// position du texte
  display.println("HELLO WORLD!");// texte à afficher
  display.display();// affiche le contenu du buffer sur l'écran
}


void loop() {
  
}