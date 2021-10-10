#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t pid = getpid();
	char command[1024];
	printf("pid = %d\n", pid);
	snprintf(command, sizeof(command), "ps -lp %d", pid);
	system(command);
	exit(0);
}
