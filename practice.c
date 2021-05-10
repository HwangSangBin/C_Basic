#include <stdio.h>

int main(void)
{
	double height = 179.5;
	double weight = 75.0;

	if (height >= 187.5)
	{
		if (weight < 80)
		{
			printf("OK \n");
		}
	}
	else
	{
		printf("Canel \n");
	}
	return 0;
}
