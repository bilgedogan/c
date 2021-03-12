/*
* This code finds roots of second degree 
* pollynomial and asks user for coefficients
* of pollynomial.
* 
* For power use pow(a,b) means a^b
* For log 10 to x use log10(x)
*/

#include <stdio.h>
#include <math.h> //for sqrt 

int main()
{
	int a = 0, b = 0, c = 0;
	printf("Enter the coefficients of pollynomial a, b, and c: ");
	scanf("%d %d %d", &a, &b, &c);
	double discriminant = b * b - 4.0 * a * c;
	double x1 = ((-b) + sqrt(discriminant)) / (2 * a);
	double x2 = ((-b) - sqrt(discriminant)) / (2 * a);
	printf("x1 and x2: %f %f", x1, x2);
	return 0;
}