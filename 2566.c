#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i = 0, j = 0;
	int max = 0, num = 0;
	int x = 1, y = 1;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			scanf("%d", &num);
			if (num > max)
			{
				max = num;
				x = i+1;
				y = j+1;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d", x,y);
	return 0;
}