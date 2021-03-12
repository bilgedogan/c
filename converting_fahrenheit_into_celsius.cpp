/*
* This code asks temperature in fahrenheit
* from user and converts it to celsius.
*/

#include <stdio.h>

int main()
{
	double fahrenheit = 0.0;
	printf("Enter temperature in fahrenheit: ");
	scanf("%lf", &fahrenheit);
	double celsius = (fahrenheit - 32) / (5 * 9);
	printf("Temperature in celsius: %.2f \n", celsius);
	return 0;
}