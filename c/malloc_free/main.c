#include <stdlib.h>
#include <stdio.h>

int	main()
{
	setbuf(stdout, NULL);
	char *c = malloc(1);
	for (int i = 0; i < 100; i++)
	{
		printf("i = %d\n", i);
		c[i] = 'a';
	}
	return (0);
}
