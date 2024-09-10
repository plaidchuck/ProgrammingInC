#include <stdio.h> 

int main() {

	int num = 1;

	for (int i = 1; i <= 10; ++i) {
		
		if (i == 10) {
			printf("!%2i       Factorial: %i\n", i, num *= i);
		} else {
			printf("!%i        Factorial: %i\n", i, num *= i);
		}
	}

}