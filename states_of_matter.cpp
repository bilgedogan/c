/*
* This code finds the state of water in given
* temperature and altitudes (in each 300 meters
* boiling point drops 1 degree celsius)
* (*1) ---> if(unit=='C'){
*              printf("Celsius");
*           } 
*           else {
*                printf("Fahrenheit");
*           }
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	double temperature = 0.0, altitude = 0.0;
	char unit;
	const int dropping_altitude = 300;            //this is read-only variable and we can not change its value after defining
	int cdecrease = altitude / dropping_altitude; //how many degree celcius drops 
	int fdecrease = decrease * 9 / 5 + 32;

	printf("Please enter temperature (end with C for Celsius or F for Fahreheit): ");
	scanf("%lf %c", &temperature, &unit);     //%c is for char
	printf("Enter the altitude in meters: ");
	scanf("%lf", altitude);

	if (unit != 'C' && unit != 'F') {       //&&--> and , ||--> or
		printf("Please enter unit as either C or F\n");
		return EXIT_FAILURE;
	}
	else if ((temperture <= (0 + cdecrease) && unit == 'C') || (temperature <= (32 + fdecrease) && unit == 'F')) {
		printf("water is solid at %.2f degrees %s", unit == 'C' ? "Celsius" : "Fahrenheit"); //%s for string (*1)
	}
	else if ((temperture >= (100 - cdecrease) && unit == 'C') || (temperature >= (212 - fdecrease) && unit == 'F')) {
		printf("water is gas at %.2f degrees %s", unit == 'C' ? "Celsius" : "Fahrenheit"); 
	}
	else {
	printf("water is liquid at %.2f degrees %s", unit == 'C' ? "Celsius" : "Fahrenheit"); 
	}
	return EXIT_SUCCESS;
}

