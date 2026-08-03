// Problem Link - https://codeforces.com/problemset/problem/1878/C

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vin for(auto &it:v) cin >> it

void solve(){
    ll n,k,x;
    cin >> n >> k >> x;
    ll min_s = (k*(k+1))/2;
    ll max_s = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
    if(x>=min_s && x<=max_s) cout << "YES\n";
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