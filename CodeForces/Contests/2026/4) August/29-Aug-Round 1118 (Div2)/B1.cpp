// Problem Link - https://codeforces.com/contest/2258/problem/B1
// WA
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
    int n,m;
    cin >> n >> m;
    vi v(n);
    int ec = 0;
    for(auto &it:v){
        cin >> it;
        if(it%2==0) ec++;
    }
    if(ec==0) cout << n << "\n";
    else cout << 2*ec << "\n";
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