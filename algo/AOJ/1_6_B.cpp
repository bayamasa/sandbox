#include <iostream>

using namespace std;
static const int MAX = 60;

void put_nonexist_card(int c[], char suits[], int n, char key)
{
	int flag;

	for (int k = 1; k <= 13; k++)
	{
		flag = 0;

		for (int j = 0; j < n; j++)
		{
			if (c[j] == k && suits[j] == key)
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			cout << key << " " << k << endl;
		}
	}
}

int main()
{
	int n, c[MAX], flag;
	char suits[MAX];

	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> suits[i] >> c[i];
	
	put_nonexist_card(c, suits, n, 'S');
	put_nonexist_card(c, suits, n, 'H');
	put_nonexist_card(c, suits, n, 'C');
	put_nonexist_card(c, suits, n, 'D');
	return (0);
}
