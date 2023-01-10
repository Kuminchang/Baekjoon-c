#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char fan[6] = ":fan:";
	char name[20];
	scanf("%s", name, 20);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
			{
				printf(":%s:", name);
			}
			else
			{
				printf("%s", fan);
			}
		}
		printf("\n");
	}
	return 0;
}