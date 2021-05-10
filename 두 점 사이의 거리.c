#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
}; 

int main(void)
{
	struct point a, b;
	
	printf("a의 x와 y 좌표를 입력하세요:");
	scanf("%d %d", &a.x, &a.y);
	
	printf("b의 x와 y좌표를 입력하세요:");
	scanf("%d %d", &b.x, &b.y);
	
	int dx, dy;
	double d;
	
	dx = a.x - b.x;
	dy = a.y - b.y;
	
	d = sqrt(dx * dx + dy * dy);
	
	printf("점a와 점b 사이의 거리는 %f입니다.\n", d);
	
	return 0;
} 
