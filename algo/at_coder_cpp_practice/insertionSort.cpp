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
		int v = R[i];
		int j = i - 1;
		while (j >= 0 && R[j] > v)
		{
			R[j + 1] = R[j];
			R[j] = v;
			j--;
		}
		
	}

	for (int k=0; k < n; k++)
	{
		cout << R[k] << ends;
	}
	return 0;
}
