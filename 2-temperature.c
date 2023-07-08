#include <stdio.h>

/**
 * main - Entry point
 * Description - prints fahrenheit temperatures with their celsius equivalents
 */

int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	{
		printf("Fahrenheit Temperatures with their Celsius Equivalents\n");
	}
	while(fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return (0);
}
