#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long X;
	cin >> X;

	long long ans = X /10;
	if (ans < 0 && X % 10 != 0)
	{
		ans -= 1;
	}
	if (ans == 0 && X < 0)
	{
		ans = -1;
	}
	
	std::cout << ans << std::endl;
}
