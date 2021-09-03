#include <stdlib.h>

int main()
{
	char *a = malloc(sizeof(char) * 100000000);
	*a = '1';
}
