#include <iostream>
#include "JsonService.h"
#define PUGIXML_HEADER_ONLY
#include <iostream>
#include "Weather.h"
#include "XmlService.h"

int main()
{
    setlocale(LC_ALL, "rus");
    JsonService js;
    Weather w = js.getWeather("weather.txt");
    w.print();﻿
    XmlService xs;
    Weather w = xs.getWeather("weatherXML.txt");
    w.print();
}
