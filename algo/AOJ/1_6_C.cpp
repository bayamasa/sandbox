#include <iostream>
using namespace std;

int main()
{
	int b, f, r, value;
	int n;
	cin >> n;

	int res[4][3][10] = {{{}}};

	for (int i = 0; i < n; i++)
	{
		cin >> b >> f >> r >> value;
		res[b -1][f - 1][r - 1] += value;
	}

	for (int j = 0; j < 4; j++)
	{
		for (int k = 0; k < 3; k++)
		{
			for (int l = 0; l < 10; l++)
			{
				cout << " " << res[j][k][l];
			}
			cout << endl;
		}
		if (j < 3)
		{
			cout << "####################" << endl;
		}
	}
}
