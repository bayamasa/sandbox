#include <iostream>

using namespace std;
static const long MAX = 300;

int main()
{
	long N, R[MAX][2];
	cin >> N;

	long count = 0;

	for (long a = 0; a < N; a++) 
	{
		cin >> R[a][0] >> R[a][1];
	}
	// cout << "kita" <<endl;
	//線分の式を2点で求めて、それに最後の値が当てはまらなければok
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				// y = ax + b
				// 連立方程式の求め方
				if (R[j][0] - R[i][0] == 0)
				{
					if (R[k][0] != R[i][0])
						count++;
				}
				else
				{
					long a = (R[j][1] - R[i][1]) / (R[j][0] - R[i][0]);
					long b = R[j][1] - (R[j][0] * a);
					if (R[k][1] != (a * R[k][0]) + b)
						count++;
				}
	
			}
			
		}
		
	}
	cout << count << endl;
	return 0;
}
