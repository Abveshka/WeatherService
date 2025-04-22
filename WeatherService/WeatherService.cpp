#define PUGIXML_HEADER_ONLY
#include <iostream>
#include "JsonService.h"
#include "Weather.h"
#include "XmlService.h"

int main()
{
    setlocale(LC_ALL, "rus");

    JsonService js;
    Weather w_json = js.getWeather("weather.txt");
    cout << "вывод json\n";
    w_json.print();

    XmlService xs;
    Weather w_xml = xs.getWeather("weatherXML.txt");
    cout << "вывод xml\n";
    w_xml.print();

}
