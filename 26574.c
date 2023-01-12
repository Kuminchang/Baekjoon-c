#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a = 0,num;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &num);
		printf("%d %d\n", num,num);
	}
	return 0;
}