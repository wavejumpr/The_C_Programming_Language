#include <stdio.h>

#define LOWER	0		// lower limit
#define UPPER	300		// upper limit
#define STEP	20		// step size

float tempconv(float);

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main()
{
	float fahr, celsius;
	
	printf("Fahrenheit\tCelsius\n");
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
	{
		celsius = tempconv(fahr);
		printf("%8.1f F\t%5.1f C\n", fahr, celsius);
	}

	return 0;
}

float tempconv(float f)
{
	float c = 0;
	c = 5 * (f-32) / 9;

	return c;
}
