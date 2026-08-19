// Problem Link - https://codeforces.com/problemset/problem/1679/A

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>

void solve(){
    ll n;
    cin >> n;
    if(n<4 || n&1) cout << "-1\n";
    else cout << (n+5)/6 << " " << n/4 << "\n";
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