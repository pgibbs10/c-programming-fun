#include <stdio.h>

/* Uses floats instead of integers for more precise arithmetic */

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("\nCelsius to Fahrenheit cheat sheet\n");

	while (celsius <= upper) {
		fahr = (celsius * (9.0/5.0)) + 32.0;
		printf("%3.0f %6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}

	printf("\n");

	return 0;
}
