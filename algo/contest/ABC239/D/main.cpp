#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main()
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	int tmp;
	bool flag = false;
	while (A <= B)
	{
		flag = false;
		tmp = C;
		while (tmp <= D)
		{
			if (IsPrime(tmp + A))
			{
				flag = true;
			}
			if (flag)
				break;
			tmp++;
		}
		if (!flag)
		{
			std::cout << "Takahashi" << std::endl;
			return (0);
		}
		A++;
	}
	std::cout << "Aoki" << std::endl;
}
