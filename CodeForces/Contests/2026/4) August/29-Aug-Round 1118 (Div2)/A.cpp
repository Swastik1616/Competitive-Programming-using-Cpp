// Problem Link - https://codeforces.com/contest/2258/problem/A

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int,int>> 

void solve(){
    int n;
    cin >> n;
    vi v(n);
    for(auto &it:v) cin >> it;
    if(n==1) cout << v[0] << "\n";
    else cout << gcd(v[0],v[n-1]) << "\n";
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