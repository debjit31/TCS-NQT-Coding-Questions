#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool checkPrime(int n)
{
	if(n <= 1)
		return false;
	else if(n == 2)
		return true;
	else
	{
		for(int i=2; i<=sqrt(n);i++)
		{
			if(n%i == 0)
			{
				return false;
			}
		}
		return true;
	}
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	if(n < 0)
		cout << "Enter a positive number!!";
	else
	{
		bool p = checkPrime(n);
		if(p == true)
			cout << "Prime!!";
		else
			cout << "Not Prime!!!";
	}

	return 0;
}