#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int flag = 0;
	char name[31];
	int alpha[28] = { 0, };
	int personal = 0;
	scanf("%d", &personal);
	for (int i = 0; i < personal; i++)
	{
		scanf("%s", name, 45);
		alpha[name[0] - 'a']++;
	}
	for (int i = 0; i < 28; i++)
	{
		if (alpha[i] >= 5)
		{
			printf("%c", i + 'a');
			flag = 1;
		}
	}
	if (flag == 0)
	{
		printf("PREDAJA");
	}
	return 0;
}