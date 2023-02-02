#include <stdio.h>

#define LOWER	0		// lower limit
#define UPPER	300		// upper limit
#define STEP	20		// step size

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main()
{
	float fahr, celsius;
	
	printf("Fahrenheit\tCelsius\n");
	for (fahr = UPPER; fahr >= LOWER; fahr-=STEP)
	{
		celsius = 5 * (fahr-32) / 9;
		printf("%8.1f F\t%5.1f C\n", fahr, celsius);
	}

	return 0;
}
