// Problem Link - https://codeforces.com/problemset/problem/1666/D

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
    string s,t;
    cin >> s >> t;

    map<char,int> mp;
    for(auto it:t) mp[it]++;

    for(int i=s.size()-1;i>=0;i--){
        if(mp[s[i]]>0) mp[s[i]]--;
        else s[i] = '.';
    }

    string c = "";
    for(auto it:s) if(it!='.') c += it;
    
    if(c==t) cout << "YES\n";
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