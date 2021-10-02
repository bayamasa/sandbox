#include <iostream>

using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;

	int res = a - b;
	int ans = 1;	
	for (int i = 0; i < res; i++)
	{
		ans *= 32;
	}
	cout << ans << endl;
	return (0);
}
