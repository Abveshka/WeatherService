#define PUGIXML_HEADER_ONLY
#include <iostream>
#include "Weather.h"
#include "XmlService.h"



int main()
{
    XmlService xs;
    Weather w = xs.getWeather("weatherXML.txt");
    w.print();
}
