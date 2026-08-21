// Problem Link - https://codeforces.com/problemset/problem/1675/B

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
    vi a(n);
    for(auto &it:a) cin >> it;  

    int ans = 0;
    for(int i=n-2;i>=0;i--){
        while(a[i]>=a[i+1]){
            ans++;
            a[i] /= 2;
            if(a[i]==0) break;
        }
        if(a[i]==0 && a[i+1]==0){
            ans = -1;
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