#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score[100] = { 0, };
	int problem = 0, sum = 0,count = 0;
	scanf("%d", &problem); //�迭 ĭ
	for (int i = 0; i < problem; i++) //�Ҵ���� �迭 ĭ����
	{
		scanf("%d", &score[i]); //�Է�
			if (score[i] == 1) //�迭�� 1�� ��������
			{
				count++; //���ش�
				sum += count; //ī��Ʈ�� ���� sum��  ���ؼ� ����
			}
			else if (score[i] == 0) //�迭�� 0�̸�
			{
				count = 0; //ī��Ʈ���� �ʴ´�
			}
	}
	printf("%d",sum); //sum�� ������ ���� ���
	return 0;
}