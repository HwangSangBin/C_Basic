#include <stdio.h>
#include <limits.h>
#define NUMBER 5
 
int main(void)
{
	int i, max, min, index;
	int arrary[NUMBER];
	max = 0;
	index = 0;
	// arrary[0] ~ arrary[4] : �� 5���� �� �� �ִ� ũ���� �迭 ����
	for (i = 0; i < NUMBER; i++)
	{
		scanf("%d", &arrary[i]);
		if (max < arrary[i])
		{
			max = arrary[i];
			index = i;
		}
	} 
	printf("���� ū ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", max, index + 1);
	min = INT_MAX;
	for (i = 0; i < NUMBER; i++)
	{
		scanf("%d", &arrary[i]);
		if (min > arrary[i])
		{
			min = arrary[i];
			index = i;
		}
	} 
	printf("���� ���� ���� %d�Դϴ�. �׸��� %d��°�� �ֽ��ϴ�.\n", min, index + 1);
	return 0;
}
