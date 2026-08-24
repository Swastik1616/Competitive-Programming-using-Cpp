// Problem Link - https://codeforces.com/problemset/problem/1909/B

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
    vll v(n);
    ll ans = 0;
    for(auto &it:v) cin >> it;
    for(int i=1;i<=60;i++){
        set<ll> s;
        ll k = 1LL << i;
        for(auto it:v) s.insert(it%k);
        if(s.size()==2){
            ans = k;
            break;
        }
    }
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