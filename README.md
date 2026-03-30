# Afficheur OLED avec ESP32

## Description
Projet PlatformIO permettant d'afficher des données 
sur un écran OLED SSD1306 via un ESP32.

## Matériel utilisé
- ESP32
- Écran OLED SSD1306 (128x64)
- Câbles de connexion

## Branchement
| OLED | ESP32 |
|------|-------|
| VCC  | 3.3V  |
| GND  | GND   |
| SDA  | GPIO 21 |
| SCL  | GPIO 22 |

## Bibliothèques utilisées
- Adafruit SSD1306
- Adafruit GFX

## Fonctionnalités
- Affichage du texte sur l'écran OLED
- Affichage de la température
