// Problem Link - https://codeforces.com/problemset/problem/1814/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    ll n,k;
    cin >> n >> k;
    if(n%2==0 || (n-k)%2==0) cout << "YES\n";
    else cout << "NO\n";
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