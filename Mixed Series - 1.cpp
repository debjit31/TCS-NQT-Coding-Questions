#include <iostream>
using namespace std;
using namespace std;
int main() {
	
	int n;
	cin >> n;
	if(n%2 == 0)
	{
		if(n==2)
			cout << 0;
		else{
			int m = n/2;
			cout << (m-1) * 6;
		}
	}
	else{
		if(n == 1)
			cout << 0;
		else
		{
			int m = n / 2;
			cout << m * 7;
		}
	}
	
	
	
	return 0;
}