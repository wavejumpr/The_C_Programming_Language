#include <stdio.h>

#define LOWER	0		// lower limit
#define UPPER	300		// upper limit
#define STEP	20		// step size

/* print Celsius-Fahrenheit table
 * for fahr = 0, 20, ..., 300 */
int main()
{
	float fahr, celsius;
	
	celsius = LOWER;
	printf("Celsius\tFahrenheit\n");
	while (celsius <= UPPER)
	{
		fahr = (celsius*9/5) + 32;
		printf("%5.1f C\t%8.1f F\n", celsius, fahr);

		celsius += STEP;
	}

	return 0;
}
