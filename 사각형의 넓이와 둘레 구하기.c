#include <stdio.h>

struct square {
	int garo;
	int sero;
};

int main(void)
{
	struct square s;
	int ss, length;
	printf("사각형의 가로 한변의 길이:");
	scanf("%d", &s.garo);
	printf("사각형의 세로 한변의 길이:");
	scanf("%d", &s.sero);
	ss = s.garo * s.sero;
	length = (s.garo + s.sero) * 2;
	printf("사격형의 넓이: %d\n", ss);
	printf("사각형의 둘레: %d", length);
	return 0;
}
