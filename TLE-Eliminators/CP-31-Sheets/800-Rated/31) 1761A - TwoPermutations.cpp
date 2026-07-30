// Problem Link - https://codeforces.com/problemset/problem/1761/A

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
    int n,a,b;
    cin >> n >> a >> b;
    if((a+b+2<=n) || (a==b && b==n)) cout << "Yes\n";
    else cout << "No\n";
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