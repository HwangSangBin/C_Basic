#include <stdio.h>

int GetDays(int month, int day)
{
	int i, sum = 0;
	for (i = 1; i < month; i ++)
	{
		if (i == 2) // 이 프로그램은 윤년을 감안하지 않음 
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
	printf("날짜를 입력하세요:");
	scanf("%d %d", &month, &day);
	printf("1월 1일부터 날짜의 차이는 %d일입니다.", GetDays(month, day));
	return 0;
}
