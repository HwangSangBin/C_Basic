#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	int absoluteX = x > 0 ? x : -x;
	// ? 왼쪽이 참이면 : 왼쪽 출력, ? 왼쪽이 거짓이면 : 오른쪽 출력 
	int max = x > y ? x : y;
	int min = x < y ? x : y;
	printf("x의 절댓값은 %d입니다.\n", absoluteX);
	printf("x와 y 중 최댓값은 %d이고 최솟값은 %d입니다.\n", max, min); 
	return 0;
}
