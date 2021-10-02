#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
	string 	a, b;
	int		asize, bsize;
	char	*s1, *s2;

	cin >> a >> b;
	
	asize = a.size();
	bsize = b.size();

	if (asize != bsize)
	{
		cout << "No" << endl;
		return (0);
	}
	if (a == b)
	{
		cout << "Yes" << endl;
		return (0);
	}
	for (int i = 0; i < asize - 1; i++)
	{
		string c = a;
		string ef = {a[i]};
		string gh{a[i + 1]};
		c.replace(i + 1, 1, ef);
		c.replace(i, 1, gh);
		if(b == c)
		{
			cout << "Yes" << endl;
			return (0);
		}
	}
	cout << "No" << endl;
	return (0);
}
