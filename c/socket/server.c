#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/uio.h>
#include <unistd.h>

#define SERVER_ADDR "127.0.0.1"
#define SERVER_PORT 12345

enum {
	NQUEUESIZE = 5,
};

char *message = "Hello!\nGood-bye!!\n";

int main()
{
	int s, ws, soval, cc;
	struct sockaddr_in sa, ca;
	socklen_t ca_len;

	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		perror("socket");
		exit(1);
	}
	// アドレスの再利用設定
	soval = 1;
	if (setsockopt(s, SOL_SOCKET, SO_REUSEADDR, &soval, sizeof(soval)) == -1)
	{
		perror("sesetsockoptt");
		exit(1);
	}

	memset(&sa, 0, sizeof(sa));
	sa.sin_len = sizeof(sa);
	sa.sin_family = AF_INET;
	sa.sin_port = htons(SERVER_PORT);
	sa.sin_addr.s_addr = htonl(INADDR_ANY);
	if (bind(s, (struct sockaddr *)&sa, sizeof(sa)) == -1)
	{
		perror("bind");
		exit(1);
	}

	if (listen(s, NQUEUESIZE)){
		perror("listen");
		exit(1);
	}

	fprintf(stderr, "Ready.\n");

	while(1)
	{
		fprintf(stderr, "Waiting for a connection...\n");
		ca_len = sizeof(ca);
		if ((ws = accept(s, (struct sockaddr *)&ca, &ca_len)) == -1)
		{
			perror("accept");
			exit(1);
		}

		fprintf(stderr, "Connection established...\n");
		if ((cc = write(ws, message, strlen(message))== -1))
		{
			perror("write");
			exit(1);
		}
		fprintf(stderr, "Message sent.\n");

		if(shutdown(ws, SHUT_RDWR) == -1)
		{
			perror("shutdown");
			exit(1);
		}
		if(close(ws) == -1) {
			perror("close");
			exit(1);
		}
	}
}

