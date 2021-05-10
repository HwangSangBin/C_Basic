#include <stdio.h>
#include <limits.h>
#define NUMBER 5 

/*
	배열은 데이터가 많을 때 사용
	배열은 한없이 많을 수 있으면서도그 데이터 개수가 변경될 수 있는 데이터들의 집합을 지정해줄 수 있다. 
*/

int main(void)
{
	int i, j, max, min, index;
	
	max = 0;
	
	int array[NUMBER]; // 0 ~ 4까지 총 5개가 들어갈 수 있는 크기의 배열 생성.
	
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if (max < array[i])
		{
			max = array[i];
			index = i;
		}
	} 
	
	printf("최댓값: %d \n최댓값의 위치: %d \n", max, index + 1);
	
	min = INT_MAX;
	
	for (j = 0; j < NUMBER; j++)
	{
		if(min > array[j])
		{
			min = array[j];
			index = j;
		}
	}
	printf("최솟값: %d \n최솟값의 위치: %d", min, index + 1);
	
	return 0;
}
