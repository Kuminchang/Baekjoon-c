#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int N;
	char si[22] = { 0, };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", si, 22);
		for (int i = 0; i < strlen(si); i++)
		{
			if (si[i] >= 65 && si[i] <= 90)
			{
				si[i] = si[i] + 32;
			}
		}
		printf("%s\n", si);
	}
	return 0;
}