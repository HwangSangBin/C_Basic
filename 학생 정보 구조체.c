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
	strcpy(s.name, "황상빈");
	s.grade = 4.15;
	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("성적: %.2f\n", s.grade);
	return 0;
}
