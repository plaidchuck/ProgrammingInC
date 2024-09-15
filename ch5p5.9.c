#include <stdio.h>

int main(void) {
	float value, value2;
	char operator;

	printf("Type in statement to evaluate: ");
	scanf ("%f %c %f", &value, &operator, &value2);

	switch (operator) {
		case '+':
			printf("%.2f\n", value + value2);
			break;
		case '-':
			printf("%.2f\n", value - value2);
			break;
		case '*':
			printf("%.2f\n", value * value2);
		case '/':
			if (value2 == 0) printf("Divison by zero.\n");
			else printf("%.2f\n", value / value2);

			break;
		case '%':
			printf("%i\n", (int) value % (int) value2);
			break;
		default:
			printf("Unknown operator.\n");
			break;
	}

	return 0;
}