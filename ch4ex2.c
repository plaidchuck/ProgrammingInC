#include <stdio.h>

int main() {

// print table of n squared where 1 <= n <= 10
		printf("---------Squared Table---------------\n");
		printf("n                           n squared\n");
		printf("-------------------------------------\n");

	for (int i = 1; i <= 10; ++i) {
		printf("%3d             ||               %d\n", i, i * i);
	}

	printf("\n");

	return 0;
}