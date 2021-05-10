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
	
	printf("학번:");
	scanf("%d\n", &s.number);
	printf("이름:");
	scanf("%s\n", s.name);
	printf("성적:");
	scanf("%lf", &s.grade);
	
	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("성적: %1f\n", s.grade);
	
	return 0;
}
