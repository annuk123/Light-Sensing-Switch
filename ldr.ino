// const int LDR_PIN = A0;

// void setup() {
//   Serial.begin(9600);
// }

// void loop() {
//   int value = analogRead(LDR_PIN);

//   Serial.print("LDR Value: ");
//   Serial.print(value);
//   Serial.print(" | ");

//   if (value < 10) {
//     Serial.println("DARK");
//   }
//   else if (value < 100) {
//     Serial.println("DIM / ROOM LIGHT");
//   }
//   else if (value < 300) {
//     Serial.println("BRIGHT");
//   }
//   else {
//     Serial.println("VERY BRIGHT");
//   }

//   delay(500);
// }



// #include <Wire.h>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SH110X.h>

// #define SCREEN_WIDTH 128
// #define SCREEN_HEIGHT 64
// #define OLED_RESET -1

// Adafruit_SH1106G display(
//   SCREEN_WIDTH,
//   SCREEN_HEIGHT,
//   &Wire,
//   OLED_RESET
// );

// const int LDR_PIN = A0;

// void setup() {
//   Serial.begin(9600);

//   // Initialize OLED
//   display.begin(0x3C, true);

//   display.clearDisplay();
//   display.setTextColor(SH110X_WHITE);

//   display.setTextSize(1);
//   display.setCursor(25, 20);
//   display.println("LIGHT SENSOR");

//   display.setCursor(35, 35);
//   display.println("STARTING...");

//   display.display();

//   delay(2000);
// }

// void loop() {

//   int value = analogRead(LDR_PIN);

//   String status;

//   if (value < 10) {
//     status = "DARK";
//   }
//   else if (value < 100) {
//     status = "DIM";
//   }
//   else if (value < 300) {
//     status = "BRIGHT";
//   }
//   else {
//     status = "VERY BRIGHT";
//   }

//   // Serial Monitor
//   Serial.print("LDR Value: ");
//   Serial.print(value);
//   Serial.print(" | ");
//   Serial.println(status);

//   // OLED
//   display.clearDisplay();

//   display.setTextColor(SH110X_WHITE);

//   // Title
//   display.setTextSize(1);
//   display.setCursor(20, 5);
//   display.println("LIGHT SENSOR");

//   display.drawLine(0, 16, 128, 16, SH110X_WHITE);

//   // Value
//   display.setCursor(5, 25);
//   display.print("Value: ");

//   display.setTextSize(2);
//   display.setCursor(50, 21);
//   display.println(value);

//   // Status
//   display.setTextSize(1);
//   display.setCursor(5, 48);
//   display.print("Status: ");

//   display.setTextSize(1);
//   display.setCursor(55, 48);
//   display.println(status);

//   display.display();

//   delay(300);
// }


// #include <Wire.h>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SH110X.h>

// #define SCREEN_WIDTH 128
// #define SCREEN_HEIGHT 64
// #define OLED_RESET -1

// Adafruit_SH1106G display(
//   SCREEN_WIDTH,
//   SCREEN_HEIGHT,
//   &Wire,
//   OLED_RESET
// );

// // ================= PINS =================

// const int LDR_PIN = A0;
// const int LED_PIN = 7;


// // ================= SETUP =================

// void setup() {
//   Serial.begin(9600);

//   pinMode(LED_PIN, OUTPUT);

//   // Initialize OLED
//   display.begin(0x3C, true);

//   display.clearDisplay();
//   display.setTextColor(SH110X_WHITE);

//   display.setTextSize(1);
//   display.setCursor(25, 20);
//   display.println("LIGHT SENSOR");

//   display.setCursor(35, 35);
//   display.println("STARTING...");

//   display.display();

//   delay(2000);
// }


// // ================= LOOP =================

// void loop() {

//   // Read LDR
//   int value = analogRead(LDR_PIN);

//   String status;


//   // -------- LIGHT CLASSIFICATION --------

//   if (value < 10) {
//     status = "DARK";
//     digitalWrite(LED_PIN, HIGH);
//   }

//   else if (value < 100) {
//     status = "DIM";
//     digitalWrite(LED_PIN, HIGH);
//   }

//   else if (value < 300) {
//     status = "BRIGHT";
//     digitalWrite(LED_PIN, LOW);
//   }

//   else {
//     status = "VERY BRIGHT";
//     digitalWrite(LED_PIN, LOW);
//   }


//   // -------- SERIAL MONITOR --------

//   Serial.print("LDR Value: ");
//   Serial.print(value);

//   Serial.print(" | Status: ");
//   Serial.println(status);


//   // -------- OLED DISPLAY --------

//   display.clearDisplay();

//   // Title
//   display.setTextSize(1);
//   display.setCursor(20, 5);
//   display.println("LIGHT SENSOR");

//   display.drawLine(0, 16, 128, 16, SH110X_WHITE);


//   // LDR value
//   display.setTextSize(1);
//   display.setCursor(5, 25);
//   display.print("Value:");

//   display.setTextSize(2);
//   display.setCursor(50, 21);
//   display.println(value);


//   // Status
//   display.setTextSize(1);
//   display.setCursor(5, 48);
//   display.print("Status:");

//   display.setCursor(55, 48);
//   display.println(status);


//   display.display();

//   delay(300);
// }


// #include <Wire.h>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SH110X.h>

// #define SCREEN_WIDTH 128
// #define SCREEN_HEIGHT 64
// #define OLED_RESET -1

// Adafruit_SH1106G display(
//   SCREEN_WIDTH,
//   SCREEN_HEIGHT,
//   &Wire,
//   OLED_RESET
// );

// // ================= PINS =================

// const int LDR_PIN = A0;
// const int LED_PIN = 7;
// const int BUZZER_PIN = 8;


// // ================= SETUP =================

// void setup() {
//   Serial.begin(9600);

//   pinMode(LED_PIN, OUTPUT);
//   pinMode(BUZZER_PIN, OUTPUT);

//   display.begin(0x3C, true);

//   display.clearDisplay();
//   display.setTextColor(SH110X_WHITE);

//   display.setTextSize(1);
//   display.setCursor(25, 20);
//   display.println("LIGHT SENSOR");

//   display.setCursor(35, 35);
//   display.println("STARTING...");

//   display.display();

//   delay(2000);
// }


// // ================= LOOP =================

// void loop() {

//   int value = analogRead(LDR_PIN);

//   String status;


//   // -------- LIGHT CLASSIFICATION --------

//   if (value < 10) {
//     status = "DARK";
//     digitalWrite(LED_PIN, HIGH);
//     noTone(BUZZER_PIN);
//   }

//   else if (value < 100) {
//     status = "DIM";
//     digitalWrite(LED_PIN, HIGH);
//     noTone(BUZZER_PIN);
//   }

//   else if (value < 300) {
//     status = "BRIGHT";
//     digitalWrite(LED_PIN, LOW);
//     noTone(BUZZER_PIN);
//   }

//   else {
//     status = "VERY BRIGHT";
//     digitalWrite(LED_PIN, LOW);

//     tone(BUZZER_PIN, 1000);
//     delay(100);
//     noTone(BUZZER_PIN);
//   }


//   // -------- SERIAL MONITOR --------

//   Serial.print("LDR Value: ");
//   Serial.print(value);

//   Serial.print(" | Status: ");
//   Serial.println(status);


//   // -------- OLED DISPLAY --------

//   display.clearDisplay();

//   display.setTextSize(1);
//   display.setCursor(20, 5);
//   display.println("LIGHT SENSOR");

//   display.drawLine(0, 16, 128, 16, SH110X_WHITE);


//   display.setCursor(5, 25);
//   display.print("Value:");

//   display.setTextSize(2);
//   display.setCursor(50, 21);
//   display.println(value);


//   display.setTextSize(1);
//   display.setCursor(5, 48);
//   display.print("Status:");

//   display.setCursor(55, 48);
//   display.println(status);


//   display.display();

//   delay(300);
// }


// #include <Wire.h>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SH110X.h>

// #define SCREEN_WIDTH 128
// #define SCREEN_HEIGHT 64
// #define OLED_RESET -1

// Adafruit_SH1106G display(
//   SCREEN_WIDTH,
//   SCREEN_HEIGHT,
//   &Wire,
//   OLED_RESET
// );

// // ================= PINS =================

// const int LDR_PIN = A0;
// const int LED_PIN = 7;
// const int BUZZER_PIN = 8;


// // ================= STATE =================

// // Remembers whether we were already
// // in VERY BRIGHT mode
// bool wasVeryBright = false;


// // ================= SETUP =================

// void setup() {
//   Serial.begin(9600);

//   pinMode(LED_PIN, OUTPUT);
//   pinMode(BUZZER_PIN, OUTPUT);

//   display.begin(0x3C, true);

//   display.clearDisplay();
//   display.setTextColor(SH110X_WHITE);

//   display.setTextSize(1);
//   display.setCursor(25, 20);
//   display.println("LIGHT SENSOR");

//   display.setCursor(35, 35);
//   display.println("STARTING...");

//   display.display();

//   delay(2000);
// }


// // ================= LOOP =================

// void loop() {

//   int value = analogRead(LDR_PIN);

//   String status;

//   // -------- LIGHT CLASSIFICATION --------

//   if (value < 10) {

//     status = "DARK";
//     digitalWrite(LED_PIN, HIGH);

//     // Reset the state
//     wasVeryBright = false;
//   }

//   else if (value < 100) {

//     status = "DIM";
//     digitalWrite(LED_PIN, HIGH);

//     // Reset the state
//     wasVeryBright = false;
//   }

//   else if (value < 300) {

//     status = "BRIGHT";
//     digitalWrite(LED_PIN, LOW);

//     // Reset the state
//     wasVeryBright = false;
//   }

//   else {

//     status = "VERY BRIGHT";
//     digitalWrite(LED_PIN, LOW);

//     // Beep ONLY when entering VERY BRIGHT
//     if (!wasVeryBright) {

//       tone(BUZZER_PIN, 1000);
//       delay(150);
//       noTone(BUZZER_PIN);

//       wasVeryBright = true;
//     }
//   }


//   // -------- SERIAL MONITOR --------

//   Serial.print("LDR Value: ");
//   Serial.print(value);

//   Serial.print(" | Status: ");
//   Serial.println(status);


//   // -------- OLED DISPLAY --------

//   display.clearDisplay();

//   display.setTextSize(1);
//   display.setCursor(20, 5);
//   display.println("LIGHT SENSOR");

//   display.drawLine(0, 16, 128, 16, SH110X_WHITE);


//   display.setCursor(5, 25);
//   display.print("Value:");

//   display.setTextSize(2);
//   display.setCursor(50, 21);
//   display.println(value);


//   display.setTextSize(1);
//   display.setCursor(5, 48);
//   display.print("Status:");

//   display.setCursor(55, 48);
//   display.println(status);


//   display.display();

//   delay(300);
// }


// #include <Wire.h>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SH110X.h>

// #define SCREEN_WIDTH 128
// #define SCREEN_HEIGHT 64
// #define OLED_RESET -1

// Adafruit_SH1106G display(
//   SCREEN_WIDTH,
//   SCREEN_HEIGHT,
//   &Wire,
//   OLED_RESET
// );

// // ================= PINS =================

// const int LDR_PIN = A0;
// const int POT_PIN = A1;

// const int LED_PIN = 7;
// const int BUZZER_PIN = 8;


// // ================= STATE =================

// bool wasVeryBright = false;


// // ================= SETUP =================

// void setup() {

//   Serial.begin(9600);

//   pinMode(LED_PIN, OUTPUT);
//   pinMode(BUZZER_PIN, OUTPUT);

//   display.begin(0x3C, true);

//   display.clearDisplay();
//   display.setTextColor(SH110X_WHITE);

//   display.setTextSize(1);
//   display.setCursor(25, 20);
//   display.println("LIGHT SENSOR");

//   display.setCursor(35, 35);
//   display.println("STARTING...");

//   display.display();

//   delay(2000);
// }


// // ================= LOOP =================

// void loop() {

//   // Read sensors
//   int value = analogRead(LDR_PIN);
//   int threshold = analogRead(POT_PIN);

//   String status;


//   // -------- LIGHT CLASSIFICATION --------
//   // Threshold is now controlled by trimpot

//   if (value < threshold / 3) {

//     status = "DARK";
//     digitalWrite(LED_PIN, HIGH);

//     wasVeryBright = false;
//   }

//   else if (value < threshold / 2) {

//     status = "DIM";
//     digitalWrite(LED_PIN, HIGH);

//     wasVeryBright = false;
//   }

//   else if (value < threshold) {

//     status = "BRIGHT";
//     digitalWrite(LED_PIN, LOW);

//     wasVeryBright = false;
//   }

//   else {

//     status = "VERY BRIGHT";
//     digitalWrite(LED_PIN, LOW);

//     // Beep only when entering VERY BRIGHT
//     if (!wasVeryBright) {

//       tone(BUZZER_PIN, 1000);
//       delay(150);
//       noTone(BUZZER_PIN);

//       wasVeryBright = true;
//     }
//   }


//   // -------- SERIAL MONITOR --------

//   Serial.print("LDR: ");
//   Serial.print(value);

//   Serial.print(" | Threshold: ");
//   Serial.print(threshold);

//   Serial.print(" | Status: ");
//   Serial.println(status);


//   // -------- OLED DISPLAY --------

//   display.clearDisplay();

//   display.setTextSize(1);
//   display.setCursor(20, 2);
//   display.println("LIGHT SENSOR");

//   display.drawLine(0, 13, 128, 13, SH110X_WHITE);


//   // LDR value
//   display.setCursor(2, 20);
//   display.print("Light:");

//   display.setTextSize(2);
//   display.setCursor(50, 17);
//   display.println(value);


//   // Threshold
//   display.setTextSize(1);
//   display.setCursor(2, 40);
//   display.print("Threshold:");

//   display.setCursor(70, 40);
//   display.println(threshold);


//   // Status
//   display.setCursor(2, 54);
//   display.print(status);


//   display.display();

//   delay(300);
// }/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SH1106G display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  OLED_RESET
);

// ================= PINS =================

const int LDR_PIN = A0;
const int POT_PIN = A1;

const int LED_PIN = 7;
const int BUZZER_PIN = 8;

// RGB LED
const int RED_PIN = 9;
const int GREEN_PIN = 10;
const int BLUE_PIN = 11;


// ================= STATE =================

bool wasVeryBright = false;


// ================= RGB FUNCTIONS =================

// Common Anode RGB LED
// LOW = ON
// HIGH = OFF

void rgbOff() {
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
}

void rgbRed() {
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, HIGH);
}

void rgbGreen() {
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
}

void rgbBlue() {
  digitalWrite(RED_PIN, HIGH);
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(BLUE_PIN, LOW);
}

void rgbYellow() {
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
}


// ================= SETUP =================

void setup() {

  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

  // Start RGB LED OFF
  rgbOff();

  // Initialize OLED
  display.begin(0x3C, true);

  display.clearDisplay();
  display.setTextColor(SH110X_WHITE);

  display.setTextSize(1);
  display.setCursor(25, 20);
  display.println("LIGHT SENSOR");

  display.setCursor(35, 35);
  display.println("STARTING...");

  display.display();

  delay(2000);
}


// ================= LOOP =================

void loop() {

  // Read LDR and trimpot
  int value = analogRead(LDR_PIN);
  int threshold = analogRead(POT_PIN);

  String status;


  // ================= LIGHT CLASSIFICATION =================

  if (value < threshold / 3) {

    status = "DARK";

    digitalWrite(LED_PIN, HIGH);
    rgbBlue();

    wasVeryBright = false;
  }

  else if (value < threshold / 2) {

    status = "DIM";

    digitalWrite(LED_PIN, HIGH);
    rgbYellow();

    wasVeryBright = false;
  }

  else if (value < threshold) {

    status = "BRIGHT";

    digitalWrite(LED_PIN, LOW);
    rgbGreen();

    wasVeryBright = false;
  }

  else {

    status = "VERY BRIGHT";

    digitalWrite(LED_PIN, LOW);
    rgbRed();

    // Beep only when entering VERY BRIGHT
    if (!wasVeryBright) {

      tone(BUZZER_PIN, 1000);
      delay(150);
      noTone(BUZZER_PIN);

      wasVeryBright = true;
    }
  }


  // ================= SERIAL MONITOR =================

  Serial.print("LDR: ");
  Serial.print(value);

  Serial.print(" | Threshold: ");
  Serial.print(threshold);

  Serial.print(" | Status: ");
  Serial.println(status);


  // ================= OLED =================

  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(20, 2);
  display.println("LIGHT SENSOR");

  display.drawLine(0, 13, 128, 13, SH110X_WHITE);

  display.setCursor(2, 20);
  display.print("Light:");

  display.setTextSize(2);
  display.setCursor(50, 17);
  display.println(value);

  display.setTextSize(1);
  display.setCursor(2, 40);
  display.print("Threshold:");

  display.setCursor(70, 40);
  display.println(threshold);

  display.setCursor(2, 54);
  display.println(status);

  display.display();

  delay(300);
}