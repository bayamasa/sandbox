#include <iostream>
#include <vector>
#include <math.h>
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
	double H;
	cin >> H;
	double ans = sqrt(H * (12800000 + H));
	cout << fixed << setprecision(10);
	std::cout << ans << std::endl;
}
