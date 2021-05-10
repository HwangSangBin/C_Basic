#include <stdio.h>

int main(void)
{
	/*
		윤년 => 4년 마다, 그러나 100년 단위일 때는 윤년에 해당X
		윤년 => 400년 단위일 때는 무조건 윤년 
	*/
	int year = 2015;
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d년은 윤년입니다.\n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
	return 0;
 } 
