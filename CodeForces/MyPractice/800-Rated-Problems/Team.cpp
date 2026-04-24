// Problem Link - https://codeforces.com/problemset/problem/231/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans=0;
    cin >> n;
    while(n--){
        int p,v,t;
        cin >> p >> v >> t;
        if((p==1 && v==1) || (p==1 && t==1) || (v==1 && t==1) || (p==1 && v==1 && t==1)) ans++;
    }
    cout << ans << endl;
    return 0;
}