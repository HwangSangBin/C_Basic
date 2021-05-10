#include <stdio.h>
#include <limits.h>
#define NUMBER 5
 
int main(void)
{
	int i, max, min, index;
	int arrary[NUMBER];
	max = 0;
	index = 0;
	// arrary[0] ~ arrary[4] : 총 5개가 들어갈 수 있는 크기의 배열 선언
	for (i = 0; i < NUMBER; i++)
	{
		scanf("%d", &arrary[i]);
		if (max < arrary[i])
		{
			max = arrary[i];
			index = i;
		}
	} 
	printf("가장 큰 값은 %d입니다. 그리고 %d번째에 있습니다.\n", max, index + 1);
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
	printf("가장 작은 값은 %d입니다. 그리고 %d번째에 있습니다.\n", min, index + 1);
	return 0;
}
