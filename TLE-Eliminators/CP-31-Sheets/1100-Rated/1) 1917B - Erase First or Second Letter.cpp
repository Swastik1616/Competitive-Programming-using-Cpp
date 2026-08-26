// Problem Link - https://codeforces.com/problemset/problem/1917/B

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
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int> mp;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(mp.find(s[i])==mp.end()) ans += (n-i);
        mp[s[i]]++;
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