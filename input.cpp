/*
* This code calculates the 
* body mass index (bmi) with
* input values from user weight (in kg)
* and height (in m).
*/

#include <stdio.h>

int main()
{
	double weight = 0.0; //initilazing the weight variable with "0.0" to get no warnings
	double height = 0.0;
	printf("Please enter your weight (in kg): ");
	scanf("%lf", &weight); //use "%lf" for double in scanf and put "&" before variable name
	printf("Please eter your height (in m): ");
	scanf("%lf", &height);
	double bmi = weight / (height * height);
	printf("Body mass index: %.1f \n", bmi); //use "%f" for double in printf
	return 0;
}