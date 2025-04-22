#include "Weather.h"

void Weather::print()
{
	cout << "The weather now:\n"
		<< "city " << city << "\n"
		<< "lon " << lon << "\n"
		<< "lat " << lat << "\n"
		<< "temperature " << temperature << "\n"
		<< "weather " << weather << "\n"
		<< "windSpeed " << windSpeed << "\n"
		<< "clouds " << clouds << "\n";
}
