#include <iostream>

using namespace std;
static const int MAX = 10000; 

int main()
{
	long R[MAX], n;
	long min, max, total;
	cin >> n;

	for (int i = 0; i < n; i++) cin >> R[i];
	total = 0;
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
	cout << min << " " << max << " " << total << endl;
}
