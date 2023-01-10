#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[101] = { '\0' };
	char alpha[30] = { '\0' };
	scanf("%s", str, 100);
	for (int i = 0; i < sizeof(str); i++)
	{
		alpha[str[i] - 97]++;
	}
	for (int i = 0; i < 26; i++)
	{
		printf("%d ", alpha[i]);
	}
	return 0;
}