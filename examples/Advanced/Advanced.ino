#include <NTPClient.h>
#include <ESP8266WiFi.h>
//#include <WiFi.h> // for WiFi shield
//#include <WiFi101.h> // for WiFi 101 shield or MKR1000
#include <WiFiUdp.h>

const char *ssid     = "ziroom3303";
const char *password = "4001001111";

WiFiUDP ntpUDP;

// You can specify the time server pool and the offset (in seconds, can be
// changed later with setTimeOffset() ). Additionaly you can specify the
// update interval (in milliseconds, can be changed using setUpdateInterval() ).
NTPClient timeClient(ntpUDP, "cn.pool.ntp.org", 8*3600, 60000);
//timeClient.setTimeOffset(8);
//timeClient.setUpdateInterval(3000);
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
  Serial.println(timeClient.getFormattedTime());
  delay(3000);
}
