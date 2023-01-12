#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[100] = { 0, };
	while (EOF)
	{
		gets_s(s, 100);
		if (s[0] ==' ')
		{
			break;
		}
		printf("%s\n", s);
	}
	
	return 0;
}