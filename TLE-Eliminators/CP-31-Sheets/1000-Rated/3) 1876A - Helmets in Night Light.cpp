// Problem Link - https://codeforces.com/problemset/problem/1876/A
// WA
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>

void solve(){
    ll n,p;
    cin >> n >> p;
    vll a(n),b(n);
    for(auto &it:a) cin >> it;
    for(auto &it:b) cin >> it;
    
    vector<pair<ll,ll>> pr(n);
    for(int i=0;i<n;i++) pr[i] = {b[i], a[i]};
    sort(pr.begin(), pr.end());

    ll temp = n, ans = 0, i = 0;
    while(temp > 0){
        ans += p;
        temp--;
        if(i < n){
            ll c = min(temp, pr[i].ss);
            ans += pr[i].ff * c;
            temp -= c;
            i++;
        }
    }
    cout << min(n*p, ans) << "\n";
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