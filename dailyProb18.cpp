#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
	 ll n;
    cin >> n;
    ll sum = 0;
    ll a[n];
    for (ll i=0;i<n;i++){
        cin >> a[i];
        sum = sum+a[i];
    }
    ll ans = 0;
    for (ll i=0;i<n;i++){
        ans = ans+(sum-a[i])*a[i];
    }
    cout << ans/2 << endl;
    }
	
	
