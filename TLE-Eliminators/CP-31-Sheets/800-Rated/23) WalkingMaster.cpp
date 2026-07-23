// Problem Link - https://codeforces.com/problemset/problem/1806/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(d<b) cout << "-1\n";
    else{
        int x = d - b;
        int ans = x;
        a+=x;b+=x;
        x = a - c;
        if(x>=0) a-=x;
        ans+=x;
        if(a==c && b==d) cout << ans << "\n";
        else cout << "-1\n";
    }
}

void TCs(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    TCs();
    //solve();
    
    return 0;
}