#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[105] = { 0, };
	char s[26] = { -1, };
	scanf("%s", s1, 105);

	for (int i = 0; i < 26; i++)
	{
		for (int i = 97; i <= 122; i++)
		{
			for (int j = 0; j < strlen(s1); j++)
			{
				if (s1[j] == i)
				{
					s[s1[j] - 'a'] = j;
					break;
				}
			}
		}
		for (int i = 0; i < 26; i++)
		{
			printf("%d ", s[i]);
		}
	}
	return 0;
}