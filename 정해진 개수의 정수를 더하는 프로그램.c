#include <stdio.h>

int main(void)
{
	int number, x, i, sum;
	printf("������ ������ �Է��ϼ���:");
	scanf("%d", &number);
	sum = 0;
	for (i = 0; i < number; i++)
	{
		printf("������ ���� �Է��ϼ���:");
		scanf("%d", &x);
		sum += x; 
	} 
	printf("��ü ������ ���� %d�Դϴ�.", sum);
	return 0;
}
