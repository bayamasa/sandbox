#include <iostream>

using namespace std;
static const int MAX = 100000;

int main()
{
	long long N, R[MAX], X;
	long sum, count;
	cin >> N;
	for(int i = 0; i < N; i++) cin >> R[i];
	cin >> X;

	sum = 0;
	count = 0;
	long j = 0;
	while(10)
	{
		if (j == N)
		{
			j = 0;
		}
		long next;
		if( j + 1 >= N)
		{
			next = R[0];
			j = 1;
		} else
		{
			next = R[j + 1];
		}
		if(sum <= X)
		{
			sum += R[j] + next;
			j += 2;
			count += 2;
		} else {
			break;
		}

	}
	cout << count << endl;
	return(0);
}
