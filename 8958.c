#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	int num;
	char word[85] = { '\0'};
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		int sum = 0 , count = 0;
		scanf("%s", word, sizeof(word));
		for (int i = 0; i < strlen(word); i++)
		{
			if (word[i] == 'O')
			{
				count++;
			}
			else if (word[i] == 'X')
			{
				count = 0;
			}
			sum += count;
		}
		printf("%d\n", sum);
	}
	return 0;
}