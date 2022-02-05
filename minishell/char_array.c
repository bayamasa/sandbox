#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdbool.h>

#include <stdio.h>

int main()
{
	char name[];
	
	name = { "Rena" , "Yuki" , "Mimi" };
	printf("%s\n%s\n%s" , name[0] , name[1] , name[2]);

	return 0;
}