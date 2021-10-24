#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int main()
{
	char *a = (char *)malloc(100000000);
	int i = 0;
	cin >> a;

	while (a[i] != '\0')
	{
		if (a[i] == 'e')
		{
			if (a[i + 1] == 'r'&& a[i + 1] != '\0')
			{
				if(a[i + 2] == '\0')
				{
					free(a);
					cout << "er" << endl;
					return(0);
				}
			}
		}
		if (a[i] == 'i')
		{
			if (a[i + 1] == 's' && a[i + 1] != '\0')
			{
				if (a[i + 2] == 't' && a[i + 2] != '\0')
				{
					if (a[i + 3] == '\0')
					{
						free(a);
						cout << "ist" << endl;
						return(0);					
					}
				}

			}
			
		}
		i++;
	}
	free(a);
	return (0);
}
