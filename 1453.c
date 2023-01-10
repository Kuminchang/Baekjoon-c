#include <stdio.h>
int main(void)
{
	int chair[101] = { 0, };
	int guest = 0, count = 0, seat = 0;
	scanf_s("%d", &guest);
	for (int i = 0; i < guest; i++)
	{
		scanf_s("%d", &seat);
		if (chair[i] > 0)
		{
			count++;
			chair[seat]++;
		}
		
	}
	printf("%d", count);
	return 0;
}