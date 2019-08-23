#include <NTPClient.h>
#include <ESP8266WiFi.h>
//#include <WiFi.h> // for WiFi shield
//#include <WiFi101.h> // for WiFi 101 shield or MKR1000
#include <WiFiUdp.h>

const char *ssid     = "ziroom3303";
const char *password = "4001001111";

WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);

void setup(){
  Serial.begin(115200);

  WiFi.begin(ssid, password);

  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 500 );
    Serial.print ( "." );
  }

  timeClient.begin();
}

void loop() {
  timeClient.update();
  Serial.println(timeClient.getDay(),HEX);
  Serial.println(timeClient.getHours(),HEX);
  Serial.println(timeClient.getMinutes(),HEX);
  Serial.println(timeClient.getFormattedTime());

  delay(1000);
}
