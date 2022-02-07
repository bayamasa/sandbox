#include <iostream>

using namespace std;

int main(void)
{
	int h, w;
	cin >> h >> w;
	int R[h][w];
	int	Row[2000];
	int	Column[2000];
	int A[h][w];

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cin >> R[i][j];
			A[i][j] = 0;
		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			Row[i] += R[i][j];
			Column[j] += R[i][j];
		}
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			
			
		}
		cout << endl;
	}
	cout << endl;
}