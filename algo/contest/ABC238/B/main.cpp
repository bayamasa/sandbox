#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, A[360];
	
	cin >> n;
	vector<bool> fl(360, false);
	fl[0] = true;
	int tmp = 0;
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
		tmp += A[i];
		res = tmp % 360;
		fl[res] = true;
	}
	int rad = 0;
	res = 0;
	for (int i = 0; i <= 360; i++)
	{
		if (fl[i % 360]){
			res = max(res, rad);
			rad = 0;
		}
		rad++;
	}
	std::cout << res << std::endl;
}
