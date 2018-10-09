#include <stdio.h>
int main()
{
	char ch;
	while((ch = getchar()) != EOF)
	{
		switch(ch)
		{
		case '\t':
			putchar('\\');
			putchar('t');
			break;
		case '\b':
			putchar('\\');
			putchar('b');
			break;
		case '\\':
			putchar('\\');
			putchar('\\');
			break;
		default:
			putchar(ch);
		}
	}
	return 0;
}
