#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(void* first, void* second)
{
	if (*(int*)first > *(int*)second)
	{
		return 1;
	}
	else if (*(int*)first < *(int*)second)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
int main(void)
{
	int num[1000005] = { 0, };
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &num[i]);
	}

	qsort(num, a, sizeof(num[0]), compare);

	for (int i = 0; i < a; i++)
	{
		printf("%d ", num[i]);
	}
	return 0;
}