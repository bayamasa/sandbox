#include <stdio.h>

int main()
{
	if (-1L > 0U)
	{
		printf("負数は0Uより大きいと評価される");
	}
	else
	{
		printf("負数は0Uより小さいと評価される");
	}
}
