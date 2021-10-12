#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>

int sig_handler()
{
	write(1, "hello", 5);
	return (1);
}

int main ()
{
	pid_t pid;
	pid = getpid();

	signal(SIGUSR1, sig_handler());
}
