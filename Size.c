#include <stdio.h>

int main(void)
{
	int x; // 인트형은 4바이트의 메모리를 가짐  
	x = 5;
	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x));
	return 0;
}
