#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <libc.h>

int sig_handler()
{
	write(1, "hello", 5);
	return (1);
}

void print()
{
	write(1, "hello", 5);
}

int main ()
{
	pid_t				pid;
	struct sigaction	act;

	pid = getpid();
	printf("pid = %d\n", pid);
	memset(&act, 0, sizeof(act));
	act.sa_handler = print;
	int rc = sigaction(SIGUSR1, &act, NULL);
	if(rc < 0)
	{
		printf("Error: sigaction() %s\n", "test");
		exit(1);
	}
	while(1) {
		printf("I'm working...\n");
		sleep(1);
    }
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <errno.h>
// #include <unistd.h>
// #include <signal.h>

// /*!
//  * @brief    正常にEXITする
//  * @note     本来引数にintが必要
//  */
// static void
// exit_process()
// {
//     fprintf(stderr, "Exit normally.\n");
//     exit(0);
// }

// /*!
//  * @brief      回転マークを表示して時間待ち合わせ
//  * @param[in]  second  秒指定の待ち合わせ時間
//  */
// static void
// wait_process(int second)
// {
//     int cnt = 0;
//     char mark[5] = {'|', '/', '-', '\\'};

//     for(cnt = 0; cnt < second; cnt++){
//         fprintf(stdout, "%c\r", mark[(cnt+1)%4]);
//         fflush(stdout);
//         sleep(1);
//     }
// }

// /*!
//  * @brief     sigaction sample
//  * @return    0:success/-1:failure
//  */
// static int
// sample_func(void)
// {
//     int rc = 0;
//     struct sigaction act;

//     /* シグナル設定 */
//     memset(&act, 0, sizeof(act));
//     act.sa_handler = exit_process; /* 関数ポインタを指定する */
//     act.sa_flags = SA_RESETHAND;   /* ハンドラの設定は一回だけ有効 */

//     /* SIGINTにシグナルハンドラを設定する */
//     rc = sigaction(SIGINT, &act, NULL);
//     if(rc < 0){
//         printf("Error: sigaction() %s\n", strerror(errno));
//         return(-1);
//     }

//     /* 待ち合わせ処理 */
//     wait_process(30);

//     return(0);
// }

// int
// main(int argc, char *argv[])
// {
//     int rc = 0;

//     if(argc != 1){
//         fprintf(stderr, "Usage: %s\n", argv[0]);
//         exit(EXIT_FAILURE);
//     }

//     rc = sample_func();
//     if(rc != 0) exit(EXIT_FAILURE);

//     exit(EXIT_SUCCESS);
// }
