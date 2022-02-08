#include <iostream>
using namespace std;

int main()
{
	size_t n;
	cin >> n;
	
	if (n == 1)
	{
		cout << "Yes" << endl;
		return (0);
	}	
	if (n > 4)
		cout << "Yes" << endl;
	else	
		cout << "No" << endl;
}
