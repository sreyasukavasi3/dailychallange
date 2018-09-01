#include <bits/stdc++.h>
using namespace std;
#include <stdlib.h>
#include <iostream>
int main()
{
	char cp[3],fp[3];
	string hor, ver;
	int i,d1,d2;
	cin >>cp >>fp;
	d1 = (int) cp[0] - (int) fp[0];
	d2 = cp[1] - fp[1];
	


    
    if(d1 > 0) hor = "L";
    else hor = "R";
    
    if(d2 > 0) ver = "D";
    else ver = "U";
    
    d1 = abs(d1);
    d2 = abs(d2);
    
    if(d1 > d2)
    {
        cout << d1 << endl;
        
        for(i = 0; i < d2; i++)
            cout << hor << ver << endl;
        while(i++ < d1)
            cout << hor << endl;
    }
    else
    {
        cout << d2 << endl;
        for(i = 0; i < d1; i++)
            cout << hor+ver << endl;
        while(i++ < d2)
            cout << ver << endl;
    }
    
    return 0;
}
