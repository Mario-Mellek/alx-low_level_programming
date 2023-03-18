#include <stdio.h>

int main()
{
	int limit = 50, i;
	int j = 1, temp;

	for (i = 0; i < limit;)
	{
		if (i == 34)
		{
			printf("%d", i);
			break;
		}
		printf("%d, ", i);
		temp = i + j;
		i = j;
		j = temp;
	}
	putchar('\n');
	return (0);
}
