#include <stdio.h>

struct square {
	int garo;
	int sero;
};

int main(void)
{
	struct square s;
	int ss, length;
	printf("�簢���� ���� �Ѻ��� ����:");
	scanf("%d", &s.garo);
	printf("�簢���� ���� �Ѻ��� ����:");
	scanf("%d", &s.sero);
	ss = s.garo * s.sero;
	length = (s.garo + s.sero) * 2;
	printf("������� ����: %d\n", ss);
	printf("�簢���� �ѷ�: %d", length);
	return 0;
}
