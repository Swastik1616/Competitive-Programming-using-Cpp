// Problem Link - https://codeforces.com/problemset/problem/1883/B

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
    string s;
    cin >> s;
    map<char,int> mp;
    for(auto it:s) mp[it]++;
    int c = 0;
    for(auto it:mp) if(it.ss&1) c++;
    if(c<=k+1) cout << "YES\n";
    else cout << "NO\n";
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