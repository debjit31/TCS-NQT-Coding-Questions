#include <iostream>
#include<cmath>
using namespace std;
using namespace std;
int main() {
	
	int n;
	cin >> n;
	if(n%2 == 0)
	{
		if(n==2)
			cout << 1;
		else{
			int m = n/2;
			cout << pow(3, m-1);
		}
	}
	else{
		if(n == 1)
			cout << 1;
		else
		{
			int m = n/2;
			cout << pow(2, m-1);
		}
	}
	
	
	
	return 0;
}