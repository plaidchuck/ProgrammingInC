#include <stdio.h>

int main(void) {
	int value, value2;

	printf("Enter two values to determine divisibility: ");
	scanf("%i %i", &value, &value2);

	if (value % value2 == 0) printf("Divisble: No remainder\n");

	else printf("Not evenly divisble, remainder: %i\n",
		value % value2);

	return 0;
}