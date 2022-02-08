#include <iostream>
using namespace std;

int main()
{
	int a, b, i;
	cin >> a >> b;
	i = 0;
	while ((a * i) - (i - 1) < b)
	{
		i++;
	}
	cout << i << endl;
}
