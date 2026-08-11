// Problem Link - https://codeforces.com/problemset/problem/1850/D

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
    int n,k;
    cin >> n >> k;
    vi v(n),v1;
    vin;
    sort(v.begin(),v.end());
    int c = 0;
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]<=k) c++;
        else c = 0;
        v1.push_back(c);
    }
    int m = 0;
    for(auto it:v1) m = max(m,it);
    cout << n - m - 1 << "\n";
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