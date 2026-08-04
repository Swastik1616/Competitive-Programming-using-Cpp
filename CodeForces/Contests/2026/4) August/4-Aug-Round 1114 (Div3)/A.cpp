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

void solve(){
    vi v(3);
    vin;
    int ans = 0;
    while(1){
        if(v[0]==v[1] || v[0]==v[2] || v[1]==v[2]) break;
        int max_i = 0, min_i = 0;
        for(int i=1;i<3;i++){
            if(v[i] > v[max_i]) max_i = i;
            if(v[i] < v[min_i]) min_i = i;
        }
        v[max_i]--;
        v[min_i]++;
        ans++;
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