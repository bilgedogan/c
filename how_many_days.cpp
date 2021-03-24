/*
* This code prints that how many
* days in a day with user input
* In this code switch-case method was used
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int month = 0;
	int year = 0;  //for february

	printf("Enter yhe month (in numbers): ");
	scanf("%d", &month);

	switch (month)
	{
	case 2:
		printf("Enter the year: ");
		scanf("%d", &year);
		printf("%s days\n", year % 4 == 0 ? "29" : "28");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30 days\n");
		break;
	
	default:
		printf("31 days\n");
		break;
	}
	return EXIT_SUCCES;
}