#include <stdio.h>
int main(void)
{
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("%s", "  C      F\n");
	printf("%s", "__________\n");
	while(celsius <= upper)
	{
		fahr = celsius * 9.0 / 5.0 + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
}
