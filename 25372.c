#include <stdio.h>	
#include <string.h>
int main(void)
{
	int a;
	char passward[20];
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		gets_s(passward, 20);
		if (strlen(passward) <= 9 && strlen(passward) >= 6)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
	return 0;
}