#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    map<string,long long int>m;
    while (n--){
        string str;
        cin >> str;
        if (m.find(s) == m.end()){
            m[str] = 0;
            cout << "OK";
            cout << endl;
        }
        else{
            cout << str << m[str] + 1 << endl;
            m[str] = m[str] + 1;
        }
    }
    return 0;
}
