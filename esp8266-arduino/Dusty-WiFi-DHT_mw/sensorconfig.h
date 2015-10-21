/*
name this file sensorconfig.h
and change your config here
*/

/* see datasheet http://sca-shinyei.com/pdf/PPD42NS.pdf */
/* CN : S5B-EH(JST) (PINs on sensor board)             */
/* 1 : COMMON(GND)                                     */
/* 2 : OUTPUT(P2)                                      */
/* 3 : INPUT(5VDC 90mA)                                */
/* 4 : OUTPUT(P1)                                      */
/* 5 : INPUT(T1)   FOR THRESHOLD FOR [P2]              */
/*                                                     */
/*******************************************************/
// nodemcu pins Dx - GPIOx
// here in config use GPIO number
// // 0 [*]   GPIO16
// // 1       GPIO5
// // 2       GPIO4
// // 3       GPIO0
// // 4       GPIO2
// // 5       GPIO14 (SPI CLK)
// // 6       GPIO12 (SPI MISO)
// // 7       GPIO13 (SPI MOSI)
// // 8       GPIO15 (SPI CS)
// // 9       GPIO3 (UART RX)
// // 10      GPIO1 (UART TX)
// // 11      GPIO9
// // 12      GPIO10
// /**********************************************/

/* defines to activate sensors */
// #define DHT_ACTIVE
#define DS_ACTIVE

/* DHT PIN */
#define DHTPIN 4 // = GPIO PIN, not D
#define DHTTYPE DHT22

/* ONEWIRE BUS PIN */
#define ONEWIRE_PIN 15 // GPIO15=D8

/* PPD PINs */
#define  PPD42_P1_PIN 12 // GPIO12=D6
#define  PPD42_P2_PIN 14 // GPIO14=D5
unsigned long sampletime_ms = 15000;


/* WIFI credentials */
const char* ssid = "Freifunk";
const char* password = "";
//const char* host = "api.dusti.xyz";
const char* host = "10.42.26.103";
const int httpPort = 80;

/*
http://forum.arduino.cc/index.php?topic=37371.0


If the include file is meant to be shared by multiple Sketches then...
Close the Arduino IDE
Navigate to the {Arduino}\hardware\libraries directory
Create a subdirectory.  I suggest something like MyCommon.
In the new subdirectory, create a header file.  I suggest something like MyCommon.h.
Open the new header file, edit it as you wish, and save it
Open the Arduino IDE
Create or open a Sketch
Add a #include to the top of the Sketch that references your new include file
*/
