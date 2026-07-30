// Problem Link - https://codeforces.com/problemset/problem/1766/A

#include<bits/stdc++.h>

using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

#define ff first
#define ss second
#define vi vector<int>
#define vll vector<ll>
#define vin for(auto &it:v) cin >> it

bool nonZero(int n){
    int c = 0;
    while(n){
        int d = n % 10;
        if(d!=0) c++;
        if(c>1) break;
        n/=10;
    }
    if(c>1) return false;
    return true;
}

void solve(vi &v){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=0;i<v.size();i++) {
        if(v[i]<=n) ans++;
        else break;
    }
    cout << ans << "\n";
}

void TCs(vi &v){
    int t;
    cin >> t;
    while(t--){
        solve(v);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vi v;
    for(int i=1;i<=999999;i++){
        if(nonZero(i)) v.push_back(i);
    }
    TCs(v);
    //solve();
    
    return 0;
}