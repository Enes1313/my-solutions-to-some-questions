#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, x, y;
	
	do {
		printf("Enter the odd positive number : ");
		scanf("%d", &n);
	} while (n < 0 || n % 2 == 0);

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= n; y++)
		{
			if (y >= ((n + 1) / 2 - abs(abs(x - (n + 1) / 2) - (n - 1) / 2)) && y <= ((n + 1) / 2 + abs(abs(x - (n + 1) / 2) - (n - 1) / 2)))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
    
	return 0;
}
