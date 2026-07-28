// Problem Link - https://codeforces.com/problemset/problem/1783/A

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
    int n;
    cin >> n;
    vi v(n);
    vin;

    sort(v.begin(),v.end());
    if(v[0]==v[n-1]) cout << "NO\n";
    else{
        cout << "YES\n" << v[n-1] << " ";
        for(int i=0;i<n-1;i++) cout << v[i] << " ";
        cout << "\n";
    }
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