#include <stdio.h>
#include <stdlib.h>

struct student {
	int number;
	char name[10];
	double grade;
}; 

int main(void)
{
	struct student s;
	s.number = 202015841;
	strcpy(s.name, "Ȳ���");
	s.grade = 4.15;
	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %.2f\n", s.grade);
	return 0;
}
