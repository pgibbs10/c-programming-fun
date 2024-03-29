#include <stdio.h>

/* Uses floats instead of integers for more precise arithmetic */

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("\nFahrenheit to Celsius cheat sheet\n");

	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	printf("\n");

	return 0;
}
