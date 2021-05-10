#include <stdio.h> 

int main(void)
{
	int x = 50;
	float y = 123456789.123456789; // 4바이트 만큼 차지 
	double z = 123456789.123456789; // 8바이트 만큼 차지 
	printf("x = %d\n", x);
	printf("y = %.2f\n", y);
	printf("z = %.2f\n", z);
	return 0;
}
