#include <stdio.h>

int main(void)
{
	int score[5][2];
	int total[2] = {0, }; // 1차원 배열을 할당할 때 모든 데이터의 값에 0을 넣어줌
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf("%d번의 학생의 수학, 영어 점수는:", i + 1);
		scanf("%d %d", & score[i][0], & score[i][1]);
	} 
	
	for(i = 0; i < 5; i++)
	{
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	printf("\n\n5명의 수학 점수의 합계: %d\n", total[0]);
	printf("\n5명의 영어 점수의 합계: %d\n", total[1]);
	return 0;
}
