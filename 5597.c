#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int st[30] = { 0, };
	int n = 0;
	for (int i = 1; i <= 28; i++)
	{
		scanf("%d", &n);
		st[n] = 1;

	}
	for (int j = 1; j <= 30; j++)
	{
		if (st[j] != 1)
		{
			printf("%d\n", j);
		}
	}
	return 0;
}