#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char sr[105] = { 0, };
	scanf("%s", sr, 105);
	for (int i = 0; i < strlen(sr); i++)
	{
		if (sr[i] <= 90 && sr[i] >= 65)
		{
			sr[i] += 32;
		}
		else if (sr[i] <= 122 && sr[i] >= 97)
		{
			sr[i] -= 32;
		}
	}
	printf("%s", sr);
	return 0;
}