#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a = 0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		for (int j = 0; j < i - 1; j++)
		{
			printf(" ");
		}
		for (int j = 1; j <= a - i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}