#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(void* first, void* second)
{
	if (*(int*)first > *(int*)second)
	{
		return -1;
	}
	else if (*(int*)first < *(int*)second)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main(void)
{
	int N;
	scanf("%d", &N);
	int* arr = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, N, sizeof(int), compare);
	for (int i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}