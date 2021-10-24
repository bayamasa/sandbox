#include <iostream>

using namespace std;
static const long MAX = 60;

int main()
{
	long h, w, R[MAX][MAX];
	cin >> h >> w;

	for (long a = 0; a < h; a++) 
	{
		for (long b = 0; b < w; b++)
		{
			cin >> R[a][b];
		}
	}
	//忠実に問題文を再現するべき
	for (long i = 0; i < h; i++)
	{
		for (long j = i + 1; j < h; j++)
		{
			for (long k = 0; k < w; k++)
			{
				for (long p = k + 1; p < w; p++)
				{
					if(R[i][k] + R[j][p] <= R[j][k] + R[i][p])
					{
						cout << "Yes" << endl;
						return(0);
					}
				}
			}
		}
	}
	
	cout << "No" << endl;
	return (0);
}
