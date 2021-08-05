#include <stdio.h>

int main()
{
	char a = 0x63;
	char b = 0x95;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", a >> 4); //正の整数なので論理シフト
	printf("%d\n", b >> 4); //負の整数なので算術シフト
}
