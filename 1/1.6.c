#include <stdio.h>
int main(void)
{
	int c = 0;
	int result = -1;
	while(result  = ((c = getchar()) != EOF))
	{
		printf("\n%s %d %s ", "result:", result, "symbol:");
		putchar(c);
	}
	printf("\n%s %d %s %d\n", "result:", result, "symbol:", c);
	return 0;
}
