// Problem Link - https://codeforces.com/problemset/problem/1883/C

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
    vi v(n);
    vin;
    for(auto it:v){
        if(it%k==0) {
            cout << "0\n";
            return;
        }
    }
    int ans = INT_MAX;
    int curr = 0, ec  = 0;
    for(auto it:v){
        if(it%2==0) ec++;
        curr = k - it%k;
        ans = min(ans,curr);
    }
    if(k==4){
        if(ec==0) ans = min(ans,2);
        else if(ec==1) ans = min(ans,1);
        else ans = min(ans,0);
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