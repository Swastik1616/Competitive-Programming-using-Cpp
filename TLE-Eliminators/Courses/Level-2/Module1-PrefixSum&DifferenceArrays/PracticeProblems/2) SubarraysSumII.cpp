// Problem Link - https://cses.fi/problemset/task/1661

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void TLEagyaaIsme(){ // brute force
    ll n,x;
    cin >> n >> x;
    vector<int>v(n),pre(n);
    for(auto &it:v) cin >> it;
    ll s = 0, ans = 0;

    for(int i=0;i<n;i++){
        s = v[i];
        for(int j=i+1;j<n;j++){
            s += v[j];
            if(s==x) ans++;
        }
    }
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x;
    cin >> n >> x;
    
    vector<ll>v(n);
    for(auto &it:v) cin >> it;
    
    map<ll,ll> mp;
    mp[0] = 1;
    ll ans=0,sum=0;
    
    for(int i=0;i<n;i++){
        sum += v[i];
        ans += mp[sum-x];
        mp[sum]++;
    }

    cout << ans;
    return 0;

}