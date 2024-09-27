#include <stdio.h>

int main(void) {
	int num;
	int numDigits = 0;
	int digitCount = 0;
	int maxDecimal = 1;
	int digit;

	printf("Number? ");
	scanf("%i", &num);

	if (num == 0) printf("zero\n");

	else {
		numDigits = num;

		while (numDigits != 0) {
			numDigits /= 10;
			digitCount++;
		}

		for (int i = 1; i < digitCount; ++i) {
			maxDecimal *= 10;
		}

		for (int i = 0; i < digitCount; ++i) {
			digit = num / maxDecimal;
			switch (digit % 10) {
				case 0: printf("zero "); break;
				case 1: printf("one "); break;
				case 2: printf("two "); break;
				case 3: printf("three "); break;
				case 4: printf("four "); break;
				case 5: printf("five "); break;
				case 6: printf("six "); break;
				case 7: printf("seven "); break;
				case 8: printf("eight "); break;
				case 9: printf("nine "); break;
				default: break;
			}

			maxDecimal /= 10;
		}

		printf("\n");
		return 0;
	}
}