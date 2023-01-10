#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a = 0;
	char name[101] = { 0, };
	char last[101] = { 0, };
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
			scanf("%s", name, 101);
			if (name[i] >= 65 && name[i] <= 90)
			{
				name[i] = name[i] + 32;

			}
			else if(name[i] <= 122 & name[i] >= 97)
			{
				name[i] = name[i];
			}
	}
	for (int i = 0; i < name; i++)
	{
		printf("%s\n", name[i]);
	}
	return 0;
}

int main() {
	int N, arr[1000] = { 0 };
	int tmp;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N-1; j++) {
			if (arr[j + 1] < arr[j]) {
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}