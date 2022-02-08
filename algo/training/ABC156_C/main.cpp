#include <iostream>
using namespace std;

int main()
{
	int n, X[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> X[i];
	}
	int max = X[0];
	for (int i = 0; i < n; i++)
	{
		if (max < X[i])
			max = X[i];
	}
	int sum = 0;
	int min = 2000000;
	int ret;
	for (int i = 1; i <= max; i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			ret = (X[j] - i) * (X[j] - i);
			if (ret < 0)
				ret = ret * -1;
			sum += ret;
		}
		if (min > sum)
			min = sum;
	}
	std::cout << min << std::endl;
}
