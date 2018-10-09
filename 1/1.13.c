#include <stdio.h>
#define IN 1
#define OUT 0
#define MAXSIZE 20

int main(void)
{
	int num[MAXSIZE] = {0};
	int num_other_len = 0;
	char ch = ' ';
	int word_len = 0;
	int pstn = OUT; //position
	FILE *fp;
	fp = fopen("1.13.c", "r");
	while((ch = fgetc(fp)) != EOF)
	{
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			if(pstn == OUT)
			{
				pstn = IN;
			}
			++word_len;
		} else {
			if(pstn == IN)
			{
				pstn = OUT;
				if(word_len < MAXSIZE)
				{
					++num[word_len - 1]; // count from length 1
				} else {
					++num_other_len;
				}
				word_len = 0;
			}
		}
	}
	fclose(fp);

	if(word_len != 0)
	{
		if(word_len < MAXSIZE)
		{
			++num[word_len - 1];
		} else {
			++num_other_len;
		}
	}
	printf("%c", '\n');

	int max_num = 0;
	for(int i = 0; i < MAXSIZE; i++)
	{
		if(max_num < num[i])
		{
			max_num = num[i];
		}
	}

	char block_symbol = '0';

	for(int i = max_num; i > 0; i--)
	{
		for(int j = 0; j < MAXSIZE; j++)
		{
			if(i <= num[j])
			{
				printf("%c%c%c%c", '|', block_symbol, block_symbol, '|');

			} else {
				printf("%c%c%c%c", '|', ' ', ' ', '|');
			}
		}
		printf("%c", '\n');
	}
	for(int i = 0; i < MAXSIZE; i++)
	{
		printf("%c%c%c%c", '-','-','-','-');
	}
	printf("%c", '\n');
	for(int i = 1; i < MAXSIZE + 1; i++)
	{
		if(i < 10)
		{
			printf("%c%c%d%c", '|', ' ', i, '|');
		} else {
			printf("%c%d%c",'|', i, '|');
		}
	}
	printf("%c", '\n');
	printf("%s%d%c", "other len :", num_other_len, '\n');
	return 0;
}
