#include <stdio.h>

int main(void) {
	int value, value2;

	printf("Enter two integers: ");
	scanf("%i %i", &value, &value2);

	if (value2 == 0) printf("Division by zero.\n");

	else printf("%.3f\n", (float) value / value2);

	return 0;
}