#include <stdio.h>

int main(void)
{
	int x = 'A'; // == �ƽ�Ű�ڵ� �ѹ� 65
	// int x�� �ٲ㵵 %c�� ���� char���·� ��µ� 
	printf("%c\n", x);
	char y = 65;
	printf("%c\n", y);
	char z = 'B';
	printf("%c\n", z); // %d�� ���� char���¸� int������ ��� ���� 
	return 0;
}
