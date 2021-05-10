#include <stdio.h>
#define N 10

int main(void)
{
	int i, j;
	for (i = 0; i < N; i++)
	// (for문을 처음 시작할 때 값을 지정; 조건식; 반복하면서 연산이 이루어지는 부분) 
	{
		for (j = 0; j < N; j++)
		{
			printf("★");
		}
		printf("\n"); 
	}
	return 0;
}
