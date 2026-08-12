// Problem Link - https://codeforces.com/problemset/problem/1913/B

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
    string s;
    cin >> s;
    int n = 0, c0 = 0, c1 = 0, t = 0;
    for(auto it:s){
        n++;
        if(it=='1') c1++;
        else c0++;
    }
    for(auto it:s){
        if(it=='0' && c1>0) c1--;
        else if(it=='1' && c0>0) c0--;
        else break;
        t++;
    }
    cout << n - t << "\n";
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