#include <stdio.h>

/** main - Entry point
 * Description - prints celsius temperatures with their fahrenheit eqivalents.
 * Return: 0 (Success)
 */

int main(void)
{
	int celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 150;
	step = 15;

	celsius = lower;
	{
		printf("Celsius Temperatures with their Fahrenheit Equivalents\n");
	}
	
	while (celsius <= upper)
		{
			fahr = 32 + ((9 * celsius) / 5);
			printf("%d\t%d\n", celsius, fahr);
			celsius = celsius + step;
		}
	return (0);
}

