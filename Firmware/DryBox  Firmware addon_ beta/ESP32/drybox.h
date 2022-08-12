// wifi options
const char* ssid = "pronto";
const char* password = "fcfcfcfcfc";
//#define STANDALONE 1             // delete line if you are running DWC
#define DWC_NAME "3030.local"              // name/IP of DWC 
#define FLASH_LED 4              //LED to blink on wifi connection
#define DRYBOX_NAME "drybox"  //local name of esp32
int reportTime = 800;            // report weight to DWC interval
int refreshTime = 5000;          // web site refresh time
int ahtReadTime = 2000;          // time to read temperature and RH
