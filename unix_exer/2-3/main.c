#include <stdio.h>

char *itoa(int i)
{
	char buf[1024];
	snprintf(buf, sizeof(buf), "%d", i);
	return buf;
}

int main(){
	char *p = itoa(1234);
	printf("p = %s\n", p);
}
