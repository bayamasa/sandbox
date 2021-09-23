// 2回目のfor文を回すときに0から回していくのが特徴
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
		for (int j = 0; j < n; j++)
		{
			if (R[i] > R[j])
			{
				int tmp = R[i];
				R[i] = R[j];
				R[j] = tmp;
			}
		}
	}

	for (int k=0; k < n; k++)
	{
		cout << R[k] << ends;
	}
	return 0;
}
