#include <lib9.h>

int
abs(int a)
{
	if(a < 0)
		return -a;
	return a;
}

long
labs(long a)
{
	if(a < 0)
		return -a;
	return a;
}
