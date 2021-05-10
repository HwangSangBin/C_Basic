#include <stdio.h>

int main(void)
{
	int x = 'A'; // == 아스키코드 넘버 65
	// int x로 바꿔도 %c를 통해 char형태로 출력됨 
	printf("%c\n", x);
	char y = 65;
	printf("%c\n", y);
	char z = 'B';
	printf("%c\n", z); // %d를 통해 char형태를 int형으로 출력 가능 
	return 0;
}
