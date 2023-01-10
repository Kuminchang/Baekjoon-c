#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score[100] = { 0, };
	int problem = 0, sum = 0,count = 0;
	scanf("%d", &problem); //배열 칸
	for (int i = 0; i < problem; i++) //할당받은 배열 칸까지
	{
		scanf("%d", &score[i]); //입력
			if (score[i] == 1) //배열에 1이 들어가있으면
			{
				count++; //세준다
				sum += count; //카운트한 수를 sum에  더해서 저장
			}
			else if (score[i] == 0) //배열에 0이면
			{
				count = 0; //카운트하지 않는다
			}
	}
	printf("%d",sum); //sum에 저장한 수를 출력
	return 0;
}