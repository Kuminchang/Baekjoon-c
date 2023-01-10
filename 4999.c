#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char sound[1000] = { '\0' };
	char sound1[1000] = { '\0' };

	scanf("%s", &sound, 1000);
	scanf("%s", &sound1, 1000);
	if (strlen(sound) >= strlen(sound1))
	{
		printf("go");
	}
	else
	{
		printf("no");
	}
	return 0;
}