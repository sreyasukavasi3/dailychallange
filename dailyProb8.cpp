#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,n,d;
    cin>>n>>d;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
	}
	for(int i=0;i<n-1;i++)
{
            if(ar[i+1]-ar[i]>2*d) 
            {	a+=2;
			}
            else if(ar[i+1]-ar[i]==2*d)
            { 	a++;
			}
 }       
        
    cout<<a+2<<endl;
    return 0;
}
