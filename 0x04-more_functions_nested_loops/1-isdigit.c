#include "main.h"

int _isdigit(int c)
{
	int i;
	c >= '0' && c <= '9' ? i = 1 : i = 0;
	return (i);
}
