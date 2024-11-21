#ifndef dsp_full_loc
#define dsp_full_loc
#include <pgmspace.h>
/*************************************************************************************
    HOWTO:
    Copy this file to yoRadio/locale/displayL10n_custom.h
    and modify it
*************************************************************************************/
const char mon[] PROGMEM = "hé";
const char tue[] PROGMEM = "ke";
const char wed[] PROGMEM = "sz";
const char thu[] PROGMEM = "cs";
const char fri[] PROGMEM = "pé";
const char sat[] PROGMEM = "SZ";
const char sun[] PROGMEM = "VA";

const char monf[] PROGMEM = "hétfő";
const char tuef[] PROGMEM = "kedd";
const char wedf[] PROGMEM = "szerda";
const char thuf[] PROGMEM = "csütörtök";
const char frif[] PROGMEM = "péntek";
const char satf[] PROGMEM = "szombat";
const char sunf[] PROGMEM = "vasárnap";

const char jan[] PROGMEM = "január";
const char feb[] PROGMEM = "február";
const char mar[] PROGMEM = "március";
const char apr[] PROGMEM = "április";
const char may[] PROGMEM = "május";
const char jun[] PROGMEM = "június";
const char jul[] PROGMEM = "július";
const char aug[] PROGMEM = "augusztus";
const char sep[] PROGMEM = "szeptember";
const char oct[] PROGMEM = "október";
const char nov[] PROGMEM = "november";
const char dec[] PROGMEM = "december";

const char wn_N[]      PROGMEM = "É";
const char wn_NNE[]    PROGMEM = "É-ÉK";
const char wn_NE[]     PROGMEM = "ÉK";
const char wn_ENE[]    PROGMEM = "K-ÉK";
const char wn_E[]      PROGMEM = "K";
const char wn_ESE[]    PROGMEM = "K-DK";
const char wn_SE[]     PROGMEM = "DK";
const char wn_SSE[]    PROGMEM = "DK-D";
const char wn_S[]      PROGMEM = "D";
const char wn_SSW[]    PROGMEM = "D-DNy";
const char wn_SW[]     PROGMEM = "DNy";
const char wn_WSW[]    PROGMEM = "Ny-DNy";
const char wn_W[]      PROGMEM = "Ny";
const char wn_WNW[]    PROGMEM = "Ny-ÉNy";
const char wn_NW[]     PROGMEM = "ÉNy";
const char wn_NNW[]    PROGMEM = "ÉNy-Ny";

const char* const dow[]     PROGMEM = { sun, mon, tue, wed, thu, fri, sat };
const char* const dowf[]    PROGMEM = { sunf, monf, tuef, wedf, thuf, frif, satf };
const char* const mnths[]   PROGMEM = { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
const char* const wind[]    PROGMEM = { wn_N, wn_NNE, wn_NE, wn_ENE, wn_E, wn_ESE, wn_SE, wn_SSE, wn_S, wn_SSW, wn_SW, wn_WSW, wn_W, wn_WNW, wn_NW, wn_NNW, wn_N };

const char    const_PlReady[]    PROGMEM = "[kész]";
const char  const_PlStopped[]    PROGMEM = "[stop]";
const char  const_PlConnect[]    PROGMEM = "[csatlakozás]";
const char  const_DlgVolume[]    PROGMEM = "Hangerő";
const char    const_DlgLost[]    PROGMEM = "* LESZAKADT *";
const char  const_DlgUpdate[]    PROGMEM = "* FRISSÍTES *";
const char const_DlgNextion[]    PROGMEM = "* NEXTION *";
const char const_getWeather[]    PROGMEM = "";
const char  const_waitForSD[]    PROGMEM = "INDEX SD";

const char        apNameTxt[]    PROGMEM = "WiFi AP";
const char        apPassTxt[]    PROGMEM = "Jelszó";
const char       bootstrFmt[]    PROGMEM = "Csatlakozás: %s";
const char        apSettFmt[]    PROGMEM = "A rádió elérhetősége: HTTP://%s/";
#if EXT_WEATHER
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 hőérzet: %.1f\011C \007 légnyomás: %d hPa \007 páratartalom: %s%% \007 szél: %.1f m/s [%s] \007 nap: %s-%s";
#else
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 légnyomás: %d hPa \007 páratartalom: %s%%";
#endif
const char     weatherUnits[]    PROGMEM = "metric";   /* standard, metric, imperial */
const char      weatherLang[]    PROGMEM = "hu";       /* https://openweathermap.org/current#multi */

#endif