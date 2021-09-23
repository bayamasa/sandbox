// 全体の中の最小値を見つけて、それを端に移動する。
#include <iostream>
#include <algorithm>

using namespace std;
static const int MAX = 200000;

int main() {
	int R[MAX], n;
	cin >> n;

	for(int i = 0; i < n; i++) cin >> R[i];

	for(int i = 0; i < n; i++)
	{
		int min = i;
		for (int j = i; j < n; j++)
		{
			if (R[min] > R[j])
			{
				min = j;
			}
		}
		int tmp = R[i];
		R[i] = R[min];
		R[min] = tmp;
	}

	for (int k=0; k < n; k++)
	{
		cout << R[k] << ends;
	}
	return 0;
}
