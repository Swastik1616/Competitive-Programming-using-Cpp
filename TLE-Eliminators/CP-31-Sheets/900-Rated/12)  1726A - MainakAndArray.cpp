// Problem Link - https://codeforces.com/problemset/problem/1726/A

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
    vi v(n);
    for(auto &it:v) cin >> it;
    int ans = v[n - 1] - v[0];

    for (int i = 1; i < n; i++)
        ans = max(ans, v[i] - v[0]);

    for (int i = 0; i < n - 1; i++)
        ans = max(ans, v[n - 1] - v[i]);

    for (int i = 0; i < n - 1; i++)
        ans = max(ans, v[i] - v[i + 1]);

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