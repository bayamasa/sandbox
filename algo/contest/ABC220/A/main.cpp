#include <iostream>

using namespace std;
int main()
{
	int a, b, c;
	int n;
	cin >> a >> b >> c;

	n = 0;
	while (c * n <= b)
	{
		int mul = c * n;
		if (a <= mul && b >= mul)
		{
			cout << mul << endl;
			return (0);
		}
		n++;
	}
	cout << -1 << endl;
	return (0);
}
