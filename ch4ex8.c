#include <stdio.h>

int main(void) {
	int n = 1, number, triangularNumber, counter, maxCounter;

	do {
		printf("How many triangular numbers to be calculated: ");
		scanf("%i", &maxCounter);
	}
	while (maxCounter < 1);

	for (counter = 1; counter <= maxCounter; ++counter) {

		printf("What triangular number do you want? ");
		scanf("%i", &number);

		triangularNumber = 0;
		n = 1;

		while (n <= number) {
			triangularNumber += n;
			++n;
		}

		printf("triangularNumber %i is %i\n\n", number, triangularNumber);
	}

	return 0;
}