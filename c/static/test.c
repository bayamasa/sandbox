#include <stdio.h>
#include <stdlib.h>
#include <libc.h>

char *ret_char(char *a)
{
	a = (char *)malloc(sizeof(char) * 5);
	memset(a , 'n', 4);
	a[5] = '\0';
	return (a);
}

int main ()
{
	static char *a;
	char *b;

	printf("old a : %s\n", a);
	b = ret_char(a);
	printf("b : %s\n", b);
	printf("a : %s\n", a);
}
