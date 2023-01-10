#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char name[1000];
	int num;
	scanf("%d", &num);
	getchar();
	for (int i = 1; i <= num; i++)
	{
		fgets(name, sizeof(name), stdin);
		printf("%d. ", i);
		printf("%s", name);
	}
	return 0;
}