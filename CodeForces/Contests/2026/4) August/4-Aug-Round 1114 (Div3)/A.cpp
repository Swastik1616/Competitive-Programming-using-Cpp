// Problem Link - https://codeforces.com/contest/2254/problem/A
// UPSOLVED
#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vin for(auto &it:v) cin >> it
#define mysort sort(v.begin(),v.end())

void solve(){
    vi v(3);
    vin;
    mysort;
    cout << min(v[1]-v[0],v[2]-v[1]) << "\n";
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