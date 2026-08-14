// Problem Link - https://codeforces.com/problemset/problem/1828/B

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>

void solve(){
    int n;
    cin >> n;
    vi v(n),v1;
    for(auto &it:v) cin >> it;

    for(int i=0;i<n;i++){
        v1.push_back((v[i]-(i+1)));
    }

    int m = 0;
    for(auto it:v1) m = max(m,it);

    int ans = m;
    for(auto it:v1) if(it!=ans) ans = gcd(ans,it);

    cout << ans << "\n";
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