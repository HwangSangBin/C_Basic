#include <stdio.h>

// 두 변수의 값을 서로 변환하는 포인터 함수 
// &x = x의 주소
/*
	int x = 70;
	int *y = &x; 일 때
	
	x = *y
	&x = y 이다. 
	 
*/ 
void swap(int *x, int  *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
} 

int main(void)
{
	int x = 1;
	int y = 2;
	swap(&x, &y);
	printf("x = %d\ny = %d\n", x, y);
	return 0;
}
