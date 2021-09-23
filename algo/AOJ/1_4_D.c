#include <stdio.h>

static const int MAX = 10000; 

int main()
{
	long R[MAX], n;
	long min, max, total;
	scanf("%ld", &n);

	for (int i = 0; i < n; i++) scanf("%ld", &R[i]);
	// total = 0L;
	for (int i = 0; i < n; i++)
	{
		total = total + R[i];
	}
	min = 1000000;
	for (int i = 0; i < n; i++)
	{
		if (min > R[i])
			min = R[i];
	}
	max = -1000000;
	for (int i = 0; i < n; i++)
	{
		if (max < R[i])
			max = R[i];
	}
	printf("%ld %ld %ld\n", min, max, total);
}
