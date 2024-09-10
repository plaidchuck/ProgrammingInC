#include <stdio.h>

int main() {
	int i, triangularNumber;

	for (i = 1; i <= 50; ++i) {

		if (i % 5 == 0) {
			triangularNumber = i * (i + 1) / 2;
			printf("Number: %2i             triangularNumber: %i\n", i, triangularNumber);
		}
	}
	

	return 0;
}