#include <stdio.h>
#include <stdlib.h>
#include <libc.h>

char ret_char(char *a)
{
	char *tmp;
	int 	i;

	i = 0;
	// (a + i) != NULL とかだと無理。
	// どうやらポインタの先のポインタなども参照できるようで無限ループになってしまい、segvになる。
	while (*(a + i) != 0)
	{
		*(a + i) = '0' + i;
		i++;
	}
	*(a + i) = '0' + i;
	tmp = a + i;
	return (*tmp);
}

int main ()
{
	// 文字列を線形リストとして捉える。
	static char *a;
	char b;
	a = (char *)calloc(10, 1);
	//一回目の呼び出しのときに値を保存する。
	//その際に、戻り値の値は保存した値になり、aの参照ポインタは変わらない。
	// aのやること、値を一つ保存
	// 二回目の呼び出しのとき、次の値を戻り値で返す。
	// ただし、渡されるaは先頭アドレスのまま
	
	printf("a pointer: %p\n", a);

	b = ret_char(a);
	printf("b : %c\n", b);
	printf("a : %c\n", *a);
	b = ret_char(a);
	printf("b : %c\n", b);
	printf("a : %c\n", *a);
	b = ret_char(a);
	printf("b : %c\n", b);
	printf("a : %c\n", *a);
}
