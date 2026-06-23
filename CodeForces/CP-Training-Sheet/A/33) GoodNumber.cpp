// Problem Link - https://codeforces.com/contest/365/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

bool isGood(string s, int k){
    int n = s.size();
    map<int,int> m;
    for(int i=0;i<n;i++) m[s[i]-'0']++;
    for(int i=0;i<=k;i++) if(m[i]==0) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,ans=0;
    cin >> n >> k;
    while(n--){
        string s;
        cin >> s;
        if(isGood(s,k)) ans++;
    }
    
    cout << ans;
    return 0;
}