#include <WiFi.h>

const char *ssid = "XXXXXX"; // Your ssid
const char *password = "XXXXXXXX";   // Your password

IPAddress myIP;

void wifi_setup()
{
    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    // Applying SSID and password
    WiFi.begin(ssid, password);

    // Waiting the connection to a router
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    // Connection is complete
    Serial.println("");

    Serial.println("WiFi connected");

    Serial.println(myIP = WiFi.localIP());

}
