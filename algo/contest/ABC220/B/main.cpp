#include <iostream>

using namespace std;

// 引数をlong にとったら通ったなぜかはわからない。
long convert(long a, long k)
{
	long sum, digit;
	sum = 0;
	for (int i = 0; a > 0; i++)
	{
		digit = (a % 10);
		for (int j = 0; j < i; j++){
			digit *= k;
		}
		sum += digit;
		a /= 10;	
	}
	return sum;
}


int main()
{
	long k, a, b;
	cin >> k;
	cin >> a >> b;
	long res = convert(a, k) * convert(b, k); 
	cout << res << endl;
	return(0);
}
