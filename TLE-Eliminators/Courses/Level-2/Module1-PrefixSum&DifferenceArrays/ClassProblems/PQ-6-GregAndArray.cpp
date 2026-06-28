// Problem Link - https://codeforces.com/problemset/problem/295/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for(auto &it:a) cin >> it;
    
    vector<tuple<ll,ll,ll>> ops(m);
    for(int i=0;i<m;i++){
        ll l,r,d;
        cin >> l >> r >> d;
        l--;r--;
        ops[i] = {l,r,d};
    }

    vector<ll> op_diff(m,0);
    while(k--){
        ll x,y;
        cin >> x >> y;
        x--;y--;
        op_diff[x] += 1;
        if(y!=m-1) op_diff[y+1] -= 1;
    }
    for(int i=1;i<m;i++) op_diff[i] += op_diff[i-1];
    
    vector<ll> arr_diff(n,0);
    for(int i=0;i<m;i++){
        auto[l,r,d] = ops[i];
        ll c = op_diff[i];

        arr_diff[l] += c*d;
        if(r!=n-1) arr_diff[r+1] -= c*d;
    }

    for(int i=1;i<n;i++) arr_diff[i] += arr_diff[i-1];
    for(int i=0;i<n;i++) cout << a[i] + arr_diff[i] << " ";
    
    return 0;
}