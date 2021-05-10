#include <stdio.h>

int main(void)
{
	int x = 0;
	printf("현재 x의 값은 %d입니다.\n", x);
	x++;
	printf("현재 x의 값은 %d입니다.\n", x);
	printf("현재 x의 값은 %d입니다.\n", x--); // 출력 후 증감연산자 적용 
	printf("현재 x의 값은 %d입니다.\n", x);
	printf("현재 x의 값은 %d입니다.\n", --x); // 출력 전 증감연산자 적용 
	return 0;
}
