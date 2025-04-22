#include <iostream>
#include "JsonService.h"
#define PUGIXML_HEADER_ONLY
#include "Weather.h"
#include "XmlService.h"

int main()
{
    setlocale(LC_ALL, "rus");

    JsonService js;
    Weather w_json = js.getWeather("weather.txt");
    w_json.print();

    XmlService xs;
    Weather w_xml = xs.getWeather("weatherXML.txt");
    w_xml.print();
}
