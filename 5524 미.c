#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, count = 0;
	char name[105] = { 0, };
	
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%s", name,100);
		for (int j = 0; name[j] != '\0'; j++)
		{
			if (name[i] >= 65 && name[i] <= 90)
			{
				name[count] += 32;
			}
			else if (name[i] >= 97 && name[i] <= 122);
			{

			}
		}
		count++;
	}
	printf("%s", count);
	return 0;
}