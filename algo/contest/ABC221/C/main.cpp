#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {

	string str;   //今回は15文字入力と予めわかっている
	int size;
	long a, b;
	cin >> str;
	size = str.size();

	a = 0;
	b = 0;
	sort(str.begin(), str.end(), greater<char>());
	// 組み合わせの個数は、	
	for (int i = 0; i < size; ++i) {

			if (i % 2 == 0)
			{
				if (a == 0)
				{
					a += str[i] - '0';
				}
				else 
				{
					a *= 10;
					a += (str[i]- '0');
				}
				cout << "a = " << a << endl;
			}
			else if (i % 2 == 1)
			{
				if (b == 0)
				{
					b += (str[i]- '0');
				}
				else 
				{
					b *= 10;
					b += (str[i]- '0');
				}
				cout << "b = " << b << endl;
			}
	}
	long ans = a * b;
	cout << ans << endl;
	return 0;
}
