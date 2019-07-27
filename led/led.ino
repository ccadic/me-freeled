#include <Adafruit_NeoPixel.h>

// On définit le pin où est connecté la patte DATA du bandeau
#define PIN 4

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)

//Ici, le 150 correspond au nombre de led
Adafruit_NeoPixel strip = Adafruit_NeoPixel(3, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(4, OUTPUT);    // sets the digital pin 13 as output
  delay(500);
  digitalWrite(4, HIGH); // sets the digital pin 13 on
  delay(500);           
  
  strip.begin();
  strip.show(); // Initialise toute les led à 'off'
}

void loop() {
      for(int i = 0; i < 2; i++ ) { // On fait une boucle pour définir la couleur de chaque led
        // setPixelColor(n° de led, Rouge, Vert, Bleu)
        strip.setPixelColor(i, 223, 223, 223);
        }
      
      strip.show(); // on affiche
      delay(1000);
    }
