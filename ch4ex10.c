#include <stdio.h>

int main(void) {
	int number, right_digit;
	_Bool negSign = 0;

	printf("Enter your number.\n");
	scanf("%i", &number);

	if (number < 0) {
		number = -number;
		negSign = 1;
	}
	
	while (number != 0) {
		right_digit = number % 10;
		printf("%i", right_digit);
		number /= 10;
	}
	if (negSign) {
			printf("-");
			negSign = 0;
		}
	printf("\n");

	return 0;
}