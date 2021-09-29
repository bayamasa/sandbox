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
	int n, c[MAX][MAX], flag, num;
	char suit;

	cin >> n;
	for (int i = 0; i < n; i++) 
	{
		cin >> suit;
		cin >> num;
		switch (suit){
			case 'S':
				c[0][num] = 1;
				break;
			case 'H':
				c[1][num] = 1;
				break;
			case 'C':
				c[2][num] = 1;
				break;
			case 'D':
				c[3][num] = 1;
				break;
			default:
				break;
		}
	}	
	for(int j = 0; j < 4; j++)
	{
		for (int k = 1; k <= 13; k++)
		{
			if (c[j][k] != 1)
			{
				if (j == 0)
				{
					cout << "S " << k << endl;
				} else if ( j == 1)
				{
					cout << "H " << k << endl;
				} else if (j == 2)
				{
					cout << "C " << k << endl;	
				}else if (j == 3)
				{
					cout << "D " << k << endl;	
				}
			}
		}
	} 
	return (0);
}
