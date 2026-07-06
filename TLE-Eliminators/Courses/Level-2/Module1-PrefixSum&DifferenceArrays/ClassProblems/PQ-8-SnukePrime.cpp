// Problem Link - https://atcoder.jp/contests/abc188/tasks/abc188_d
// difference array + coordinate compression - HARD
#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    ll n,C;
    cin >> n >> C;

    vector<ll> a(n),b(n),c(n);
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    set<ll>st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
        st.insert(b[i]+1);
    }

    map<ll,ll>mp;
    ll idx = 0;
    for(auto it:st){
        mp[it] = idx;
        idx++;
    }

    vector<ll> diff(idx+1,0);
    for(int i=0;i<n;i++){
        diff[mp[a[i]]] += c[i];
        diff[mp[b[i]+1]] -= c[i];
    }
    for(int i=1;i<=idx;i++) diff[i] += diff[i-1];
    
    vector<ll>v(st.begin(),st.end());
    ll ans = 0;
    for(int i=1;i<v.size();i++){
        ll time = v[i] - v[i-1];
        ans += min(diff[i-1],C)*time;
    }
    cout << ans;
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

    //TCs();
    solve();
    
    return 0;
}