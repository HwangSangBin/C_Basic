#include <stdio.h>

int GetDays(int month, int day)
{
	int i, sum = 0;
	for (i = 1; i < month; i ++)
	{
		if (i == 2) // �� ���α׷��� ������ �������� ���� 
		{
			sum += 28;
		}
		else if (i % 2 == 0)
		{
			sum += 30;
		} 
		else
		{
			sum += 31;
		}
	}
	return sum + day;
}

int main(void)
{
	int month, day;
	printf("��¥�� �Է��ϼ���:");
	scanf("%d %d", &month, &day);
	printf("1�� 1�Ϻ��� ��¥�� ���̴� %d���Դϴ�.", GetDays(month, day));
	return 0;
}
