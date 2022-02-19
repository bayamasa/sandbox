#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	long x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	long x1_loop_min = x1 - 20;
	long x1_loop_max = x1 + 20;
	long y1_loop_min = y1 - 20;
	long y1_loop_max = y1 + 20;
	
	double five = 5;
	while (x1_loop_min < x1_loop_max)
	{
		y1_loop_min = y1 - 20;
		while (y1_loop_min < y1_loop_max)
		{
			if ((pow(x1 - x1_loop_min, 2) + pow(y1 - y1_loop_min, 2)) == five)
			{
				if ((pow(x2 - x1_loop_min, 2) + pow(y2 - y1_loop_min, 2)) == five)
				{
					std::cout << "Yes" << std::endl;
					return (0);
				}
			}
			y1_loop_min++;
		}
		x1_loop_min++;
	}
	std::cout << "No" << std::endl;
}
