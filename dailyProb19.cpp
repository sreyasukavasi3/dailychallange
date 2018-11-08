#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
    int pos = 0, flag = 1;
    do {
        flag = 0;
        for(int i =0 ;i < n ;i++) {
            if(a[i]!=0) {
                if(a[i] < m) {
                    a[i] = 0;
                } else
                    a[i] -= m;
                pos = i;
                flag = 1;
            }
        }
        if(flag == 0) {
            break;
        } 
    }while(1);
    cout<<pos + 1;
    return 0;
}
	

