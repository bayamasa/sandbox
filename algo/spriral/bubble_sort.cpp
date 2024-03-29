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
		for (int j = 0; j < n - 1; j++)
		{
				// 隣同士の値を比較して、大小関係を基づいて入れ替えを行う
				if (R[j] > R[j + 1])
				{
					int tmp = R[j];
					R[j] = R[j + 1];
					R[j + 1] = tmp;
				}
		}
	}

	for (int k=0; k < n; k++)
	{
		cout << R[k] << ends;
	}
	return 0;
}
