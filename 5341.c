#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num = 0,sum = 0;
	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
		{
			break;
		}
		for (int i = 1; i <= num; i++)
		{
			sum += i;
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}