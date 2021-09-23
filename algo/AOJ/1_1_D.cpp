#include <iostream>

using namespace std;

int main(){
	int n, hour, min, sec;
	cin >> n;
	
	hour = n / 3600;
	min = (n % 3600) / 60;
	sec = n % 60;
	cout <<  hour << ":" << min << ":" << sec << endl;
	return (0);
}
