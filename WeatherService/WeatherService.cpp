#define PUGIXML_HEADER_ONLY
#include <iostream>
#include "Weather.h"
#include "XmlService.h"


#include "JsonService.h"

int main()
{
    XmlService xs;
    Weather w = xs.getWeather("weatherXML.txt");
    w.print();
    setlocale(LC_ALL, "rus");
    JsonService js;
    Weather w = js.getWeather("weather.txt");
    w.print();

}
