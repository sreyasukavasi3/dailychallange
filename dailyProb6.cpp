#include <bits/stdc++.h>
using namespace std;

int main() {
long double n,a,b,cnt=0;
long double temp;
 set <long double> s;
 cin>>n;
 cin>>a;
 cin>>b;
 int x,y;
 
 for (int i=0;i<n;i++){	
	    cin>>x;
	    cin>>y;
	    if(x!=a){
		temp=(y-b)/(x-a);
		s.insert(temp);		
		//cout<<temp<<" ";
		}
		else {
			cnt=1;
			}
		
	}
	cout<<s.size()+cnt;
 
 
}
