#include <stdio.h>
#include <stdlib.h>

// 間接参照のテスト
// まず、別関数内部でアドレスの値を変更しても値渡しになっているので、main側ではその値を保持することはない
// 間接参照をした場合でもアドレス値が変わるわけでなく、あくまで渡す値が変わっている。
// なので*a++とやったとしても、main関数ではアドレス値が変わるわけではない。

void change_address_value(char *a, char b)
{
	printf("in change_address_value a address = %p\n", a);
	// printf("in change_address_value a str = %s\n", a);
	a = &b;
	printf("in change_address_value a next address = %p\n", a);
	// printf("in change_address_value a next str = %s\n", a);
}

void dereference(char *a, char b) 
{
	printf("in dereference a address = %p\n", a);
	printf("in dereference a str = %s\n", a);
	*a = b;
	printf("in dereference a next address = %p\n", a);
	printf("in dereference a next str = %s\n", a);
}

int main()
{
	char *a = malloc(6);
	*a = 'a';
	char b = 'b';


	printf("in main a address = %p\n", a);
	// printf("in main a str = %s\n", a);
	change_address_value(a, b);
	printf("in main a next address = %p\n", a);
	// printf("in main a next str = %s\n", a);
	printf("----------------------------------\n");

	printf("in main a address = %p\n", a);
	printf("in main a str = %s\n", a);
	dereference(a, b);
	printf("in main a next address = %p\n", a);
	printf("in main a next str = %s\n", a);
	return (0);
}
