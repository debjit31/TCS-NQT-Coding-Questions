#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int year;
    cin >> year;
    if(year % 100 == 0)
    {
        if(year % 400 == 0)
            cout << "Leap Year!!";
        else
            cout << "Not Leap Year!!";
    }
    else
    {
        if(year % 4 == 0)
            cout << "Leap Year";
        else
            cout << "Not Leap Year!!";
    }
    
    
    
    return 0;
}
