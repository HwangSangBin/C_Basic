#include <stdio.h>
#define N 10
int main(void)
{
	int x, y;
	for (x = 0; x < N; x++)
	{
		for (y = N - x - 1; y > 0; y--)
		{
			printf("  ");
		}
		for (y = 0; y < x; y++)
		{
			printf("¡Ú");
		}
		for (y = 1; y < x; y++)
		{
			printf("¡Ú");
		}
		printf("\n");
	}
	return 0;
}		
