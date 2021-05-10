#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d", &x);
	for (y = x; y > 0; y--)
	{
		printf("%d\n", y);
	}
	return 0;
}
