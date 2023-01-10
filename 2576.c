#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int sum = 0, num = 0, min = 100;
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &num);
		if (num % 2 == 1)
		{
			sum += num;
			if (num < min)
				min = num;
		}
	}
	if (sum == 0)
		printf("-1");
	else
		printf("%d %d",sum,min);
	
	return 0;
}