#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int compare(void* first, void* second)
{
	if (*(int*)first < *(int *)second)
	{
		return 1;
	}
	else if (*(int*)first > *(int*)second)
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

	int a,b;
	int cn;
	scanf("%d %d", &a, &b);

	int* arr = (int*)malloc(sizeof(int) * a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, a, sizeof(int), compare);
	printf("%d", arr[b-1]);
	return 0;
}