#include <stdio.h>
#include <limits.h>
#define NUMBER 5 

/*
	�迭�� �����Ͱ� ���� �� ���
	�迭�� �Ѿ��� ���� �� �����鼭���� ������ ������ ����� �� �ִ� �����͵��� ������ �������� �� �ִ�. 
*/

int main(void)
{
	int i, j, max, min, index;
	
	max = 0;
	
	int array[NUMBER]; // 0 ~ 4���� �� 5���� �� �� �ִ� ũ���� �迭 ����.
	
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if (max < array[i])
		{
			max = array[i];
			index = i;
		}
	} 
	
	printf("�ִ�: %d \n�ִ��� ��ġ: %d \n", max, index + 1);
	
	min = INT_MAX;
	
	for (j = 0; j < NUMBER; j++)
	{
		if(min > array[j])
		{
			min = array[j];
			index = j;
		}
	}
	printf("�ּڰ�: %d \n�ּڰ��� ��ġ: %d", min, index + 1);
	
	return 0;
}
