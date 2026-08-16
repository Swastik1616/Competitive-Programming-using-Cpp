// Problem Link - https://codeforces.com/problemset/problem/1794/B

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
    vi v(n);
    for(auto &it:v) cin >> it;
    for(auto &it:v) if(it==1) it++;
    for(int i=0;i<n-1;i++){
        if(v[i+1]%v[i]==0) v[i+1]++;
    }
    for(auto it:v) cout << it << " ";
    cout << "\n";
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