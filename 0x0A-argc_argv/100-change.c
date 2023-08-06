#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int number, y, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	for (y = 0; y < 5 && number >= 0; y++)
	{
		while (number >= coins[y])
		{
			number -= coins[y];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
