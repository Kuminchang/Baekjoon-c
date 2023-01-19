#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (j - i<= 0)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	for (int i = 0; i < num-1; i++)
	{
		for (int j = 0; j < num-1; j++)
		{
			if (j - i >= 0)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}