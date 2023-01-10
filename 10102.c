#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int count1 = 0, count2 = 0;
	int num;
	char n[20] = { 0, };
	scanf("%d", &num);
	scanf("%s", n,20);
	for (int i = 0; i < strlen(n); i++)
	{
		if (n[i] == 'A')
		{
			count1++;
		}
		else if (n[i] == 'B')
		{
			count2++;
		}
	}
	if (count1 < count2)
	{
		printf("B");
	}
	else if (count1 > count2)
	{
		printf("A");
	}
	else if (count1 == count2)
	{
		printf("Tie");
	}
	return 0;
}