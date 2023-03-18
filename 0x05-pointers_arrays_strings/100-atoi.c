#include "main.h"

int _atoi(char *s)
{
	int sign = 1;
	int i, res = 0;

	for (i = 0; s[i] == ' '; i++)
		;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
