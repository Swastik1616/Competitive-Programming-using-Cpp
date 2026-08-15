// Problem Link - https://codeforces.com/problemset/problem/1807/D

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>

void solve(){
    int n,q;
    cin >> n >> q;
    vll v(n),pre(n);
    for(auto &it:v) cin >> it;
    pre[0] = v[0];
    for(int i=1;i<n;i++) pre[i] = pre[i-1] + v[i];
    while(q--){
        ll l,r,k;
        cin >> l >> r >> k;
        l--;
        r--;
        ll ks = (r-l+1)*k;
        ll x;
        (l==0) ? x = (pre[n-1] - pre[r] + ks): x = (pre[n-1] - (pre[r]-pre[l-1]) + ks);
        if(x&1) cout << "YES\n";
        else cout << "NO\n";
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