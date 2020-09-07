#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	for(int i=0; i<a.size();i++)
	{
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
		{
			a[i] = '%';
		}
	}
	for(int i=0;i<b.size();i++)
	{
		if(b[i] != 'a' && b[i] != 'e' && b[i] != 'i' && b[i] != 'o' && b[i] != 'u' && 
			b[i] != 'A' && b[i] != 'E' && b[i] != 'I' && b[i] != 'O' && b[i] != 'U')
		{
			b[i] = '#';
		}
	}
	for(int i=0;i<c.size();i++)
	{
		if(c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
	}
	cout << a << b << c;
	
	return 0;
}