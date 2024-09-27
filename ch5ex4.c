/*
Variables accumulator and operand represents number, float to be manipulated by operator chars
'S' char sets accumulator variable to be maniuplated by operator and operands
'E' char Ends program shows value of accumulator and ends program
*/

#include <stdio.h>

int main(void) {
	float accumulator = 0;
	char operator;
	float operand = 0;

	printf("Begin Calculations\n");

	do {
		scanf("%f %c", &operand, &operator);

		if (operator == 'S') accumulator = operand;
		
		else if (operator == '+') accumulator += operand;
		else if (operator == '-') accumulator -= operand;

		else if (operator == '/') { 
			operand == 0 ? printf("Division by zero undefined\n") : (accumulator /= operand);
		}
		
		else if (operator == '*') accumulator *= operand;

		else if (operator != 'E') printf("Unrecognized Operator\n");

		printf("= %f\n", accumulator);
	}
	while (operator != 'E');
}