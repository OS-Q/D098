#if defined(__AVR__)
#include <avr/pgmspace.h>
#else
#define PROGMEM
#define PGM_P  const char *
#define pgm_read_byte(addr) (*(const unsigned char *)(addr))
#define pgm_read_word(addr) (*(const unsigned char **)(addr))
#if defined(ESP8266) || defined(ARDUINO_ARCH_ESP32)
#ifndef strcpy_P
#define strcpy_P(dest, src) strcpy((dest), (src))
#endif
#endif
#endif
#include <string.h>
#include "NtimeLib.h"
 
// the short strings for each day or month must be exactly dt_SHORT_STR_LEN
#define dt_SHORT_STR_LEN  3 // the length of short strings

static char buffer[dt_MAX_STRING_LEN+1];  // must be big enough for longest string and the terminating null

const char monthStr0[] PROGMEM = "";
const char monthStr1[] PROGMEM = "Jan";
const char monthStr2[] PROGMEM = "Feb";
const char monthStr3[] PROGMEM = "Mar";
const char monthStr4[] PROGMEM = "Apr";
const char monthStr5[] PROGMEM = "May";
const char monthStr6[] PROGMEM = "Jun";
const char monthStr7[] PROGMEM = "Jul";
const char monthStr8[] PROGMEM = "Aug";
const char monthStr9[] PROGMEM = "Sep";
const char monthStr10[] PROGMEM = "Oct";
const char monthStr11[] PROGMEM = "Nov";
const char monthStr12[] PROGMEM = "Dec";

const PROGMEM char * const PROGMEM monthNames_P[] =
{
    monthStr0,monthStr1,monthStr2,monthStr3,monthStr4,monthStr5,monthStr6,
    monthStr7,monthStr8,monthStr9,monthStr10,monthStr11,monthStr12
};

const char monthShortNames_P[] PROGMEM = "ErrJanFebMarAprMayJunJulAugSepOctNovDec";

const char dayStr0[] PROGMEM = "Err";
const char dayStr1[] PROGMEM = "Sunday";
const char dayStr2[] PROGMEM = "Monday";
const char dayStr3[] PROGMEM = "Tuesday";
const char dayStr4[] PROGMEM = "Wednesday";
const char dayStr5[] PROGMEM = "Thursday";
const char dayStr6[] PROGMEM = "Friday";
const char dayStr7[] PROGMEM = "Saturday";

const PROGMEM char * const PROGMEM dayNames_P[] =
{
   dayStr0,dayStr1,dayStr2,dayStr3,dayStr4,dayStr5,dayStr6,dayStr7
};

const char dayShortNames_P[] PROGMEM = "ErrSunMonTueWedThuFriSat";

/* functions to return date strings */

char* monthStr(uint8_t month)
{
    strcpy_P(buffer, (PGM_P)pgm_read_word(&(monthNames_P[month])));
    return buffer;
}

char* monthShortStr(uint8_t month)
{
   for (int i=0; i < dt_SHORT_STR_LEN; i++)      
      buffer[i] = pgm_read_byte(&(monthShortNames_P[i+ (month*dt_SHORT_STR_LEN)]));  
   buffer[dt_SHORT_STR_LEN] = 0;
   return buffer;
}

char* dayStr(uint8_t day) 
{
   strcpy_P(buffer, (PGM_P)pgm_read_word(&(dayNames_P[day])));
   return buffer;
}

char* dayShortStr(uint8_t day) 
{
   uint8_t index = day*dt_SHORT_STR_LEN;
   for (int i=0; i < dt_SHORT_STR_LEN; i++)      
      buffer[i] = pgm_read_byte(&(dayShortNames_P[index + i]));  
   buffer[dt_SHORT_STR_LEN] = 0; 
   return buffer;
}