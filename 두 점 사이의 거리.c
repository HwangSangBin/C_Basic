#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
}; 

int main(void)
{
	struct point a, b;
	
	printf("a�� x�� y ��ǥ�� �Է��ϼ���:");
	scanf("%d %d", &a.x, &a.y);
	
	printf("b�� x�� y��ǥ�� �Է��ϼ���:");
	scanf("%d %d", &b.x, &b.y);
	
	int dx, dy;
	double d;
	
	dx = a.x - b.x;
	dy = a.y - b.y;
	
	d = sqrt(dx * dx + dy * dy);
	
	printf("��a�� ��b ������ �Ÿ��� %f�Դϴ�.\n", d);
	
	return 0;
} 
