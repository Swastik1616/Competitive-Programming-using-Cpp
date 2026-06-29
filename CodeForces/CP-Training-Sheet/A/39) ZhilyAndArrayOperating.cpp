// Problem Link - https://codeforces.com/problemset/problem/2224/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(auto &it:v) cin >> it;
        for(int i=n-2;i>=0;i--){
            if(v[i+1]>0) v[i] += v[i+1];
        }
        ll ans = 0;
        for(auto it:v) if(it>0) ans++;
        cout << ans << "\n";
    }

    return 0;
}