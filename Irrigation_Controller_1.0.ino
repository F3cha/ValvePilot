#include <Wifi.h>
#include "esp_sleep.h"

const char* ssid = "WIFINAME"
const char* password = "yourWifiPass"

#define PHASE1 1
#define PHASE2 2
#define PHASE3 3//set your pin numbers

void WifiConnect (void){//future updates
    WiFi.begin(ssid, password);  // Start connecting to Wi-Fi

    while (Wifi.status()!= WL_CONNECTED){
      delay(500);
      Serial.print(".")
    }
    Serial.println(Connected);
}

void switch_phase (int phase_number){
  digitalWrite(phase_number, HIGH);
  delay (100)//Still need to check time
  digitalWrite(phase_number, LOW);



}

void 

void setup() {
  // put your setup code here, to run once:
  pinMode(PHASE1 , OUTPUT);
  digitalWrite(PHASE1, LOW);
   pinMode(PHASE2 , OUTPUT);
  digitalWrite(PHASE2, LOW);
   pinMode(PHASE3 , OUTPUT);
  digitalWrite(PHASE3, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

}
