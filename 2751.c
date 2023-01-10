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
	int num[100] = { 0, };
	int cnt;
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++)
	{
		scanf("%d", &num[i]);
	}

	qsort(num, cnt, sizeof(num[0]), compare);
	for (int i = 0; i < cnt; i++)
	{
		printf("%d", num[i]);
	}
	return 0;
}