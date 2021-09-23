#include <iostream>
#include <algorithm>

using namespace std;
static const int MAX = 200000;

int main() {
	int C[MAX], n;
	cin >> n;

	for(int i = 0; i < n; i++) cin >> C[i];

	for (int k=0; k < n; k++)
	{
		cout << C[k] << ends;
	}
	return 0;
}

void BubbleSort(int C[], int N)
{
	int tmp;
	for(int i = 0; i < N; i++)
	{
		for (int j = 0; j = N - 1; j++)
		{
			if (C[j] < C[j + 1])
			{
				tmp = C[j];
				
			}
	
		}
	}
}
