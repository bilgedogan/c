/**
* Writes number that less than 1000
* in string form using functions
*/

#include <stdio.h>
#include <stdlib.h>

void get_digit(int digit) {
	switch (digit) {
	case 1:
		printf("one");
		break;
	case 2:
		printf("two");
		break;
	case 3:
		printf("three");
		break;
	case 4:
		printf("four");
		break;
	case 5:
		printf("five");
		break;
	case 6:
		printf("six");
		break;
	case 7:
		printf("seven");
		break;
	case 8:
		printf("eight");
		break;
	case 9:
		printf("nine");
		break;
	}
}

void get_tens(int tens) {
	int ty = tens / 10;
	int remaining = tens - ty * 10;
	if (ty >= 2) {
		switch (ty)
		{
		case 2:
			printf("twenty");
			break;
		case 3:
			printf("thirty");
			break;
		case 5:
			printf("fifty");
			break;
		case 8:
			printf("eighty");
			break;
		default:
			get_digit(ty);
			printf("ty");
			break;
		}
		if (remaining != 0) {
			get_digit(remaining);
		}
	}
	else if(ty == 1){
		switch (tens)
		{
		case 10:
			printf("ten");
			break;
		case 11:
			printf("eleven");
			break;
		case 12:
			printf("twelve");
			break;
		case 13:
			printf("thirteen");
			break;
		case 15:
			printf("fifteen");
			break;
		case 18:
			printf("eighteen");
			break;
		default:
			get_digit(remaining);
			printf("teen");
			break;
		}
	}

}

void get_hundred(int num) {
	int hundred = num / 100;
	int remaining = num - hundred * 100;
	if (hundred != 0) {
		get_digit(hundred);
		printf("hundred");
	}
	if (remaining != 0) {
		get_tens(remaining);
	}
}

int main()
{
	int number = 0;
	printf("Enter a number that less than 1000: ");
	scanf("%d", &number);
	get_hundred(number);
	printf("\n");
	return EXIT_SUCCESS;
}