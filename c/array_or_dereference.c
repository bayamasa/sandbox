#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

// 間接参照でやっても、配列でやっても中身を書き換えることは可能
void	array(char *a)
{
	a[0] = 'a';
}

void	dereference(char *a)
{
	*a = 'b';
}

int	main(void)
{
	char *a = malloc(1);
	char *b = malloc(1);
	
	array(a);
	printf("char *a = %c\n", *a);	
	dereference(b);
	printf("char *b = %c\n", *b);
	return (0);
}
