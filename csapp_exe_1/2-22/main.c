#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
	size_t	i;
	for (i = 0; i < len; i++)
		printf(" %.2x", start[i]);
	printf("\n");
}

int main()
{
	char a = -2;
	int b = a;
	long c = a;

	char d = 2;
	int e = d;
	long f = d;

	// 負の値
	show_bytes((byte_pointer) &a, sizeof(char));
	show_bytes((byte_pointer) &b, sizeof(int));
	show_bytes((byte_pointer) &c, sizeof(long));
	// 正の値
	show_bytes((byte_pointer) &d, sizeof(char));
	show_bytes((byte_pointer) &e, sizeof(int));
	show_bytes((byte_pointer) &f, sizeof(long));
}
