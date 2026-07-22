// Problem Link - https://cses.fi/problemset/task/1646

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q;
    cin >> n >> q;
    vector<ll>v(n),pre(n);
    for(auto &it:v) cin >> it;
    
    pre[0] = v[0];
    for(int i=1;i<n;i++) pre[i] = pre[i-1] + v[i];
    //for(auto it:pre) cout << it << " ";
    while(q--){
        ll a,b;
        cin >> a >> b;
        a--;b--;
        (a==0) ? cout << pre[b]  << "\n" : cout << pre[b] - pre[a-1] << "\n";
    }
    
    return 0;
}