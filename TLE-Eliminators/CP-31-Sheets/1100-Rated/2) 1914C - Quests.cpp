// Problem Link - https://codeforces.com/problemset/problem/1914/C

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
    int n,k;
    cin >> n >> k;
    vi a(n),b(n);
    for(auto &it:a) cin >> it;
    for(auto &it:b) cin >> it;
    int sum=0,mx=0,ans=0;
    for(int i=0;i<min(n,k);i++){
        sum += a[i];
        mx = max(mx,b[i]);
        ans = max(ans,sum+(k-(i+1))*mx);
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