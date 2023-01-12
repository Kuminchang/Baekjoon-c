#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int static compare(const void* first, const void* second)
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
	int evarage = 0;
	int num[5] = { 0, };
	int num_size = sizeof(num) / sizeof(int);
	for (int i = 0; i < num_size; i++)
	{
		scanf("%d", &num[i]);
	}
	qsort(num, num_size, sizeof(int), compare);
	for (int i = 0; i < num_size; i++)
	{
		evarage = (num[0] + num[1] + num[2] + num[3] + num[4]) / 5;
	}
	printf("%d\n%d", evarage, num[2]);
	return 0;
}