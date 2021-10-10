#include <stdio.h>
#include <stdlib.h>
#include <libc.h>

char *ret_char(char **a)
{
	char *tmp;
	printf("tmp = %p\n", tmp);
	printf("a = %p\n", *a);
	*a = (char *)malloc(sizeof(char) * 5);
	memset(*a , 'n', 4);
	tmp = *a;

	// *a[5] = '\0';
	// tmp = *a;
	printf("tmp = %p\n", tmp);
	printf("a = %p\n", *a);
	return (tmp);
}

int main ()
{
	static char *a;
	char *b;

	printf("old a : %s\n", a);
	b = ret_char(&a);
	printf("b : %s\n", b);
	printf("a : %s\n", a);
	b = ret_char(&a);
	printf("b : %s\n", b);
	printf("a : %s\n", a);
}
