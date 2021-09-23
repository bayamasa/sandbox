#include <iostream>

using namespace std;

int main(){
	int a, b, area, length;
	cin >> a >> b;
	
	area = a * b;
	length = (2 * a) + (2 * b);
	cout << area << " " << length << endl;
	return (0);
}
