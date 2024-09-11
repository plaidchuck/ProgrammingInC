#include <stdio.h>

int main(void) {
	int number, digit, total = 0;

	printf("Enter integer: ");
	scanf("%i", &number);

	if (number < 0) {
		number = -number;
	}

	while (number != 0) {
		digit = number % 10;
		total += digit;
		number /= 10;
	}

	printf("Total of digits equals: %i\n", total);
}