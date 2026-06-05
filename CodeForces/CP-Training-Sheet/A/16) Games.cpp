// Problem Link - https://codeforces.com/contest/268/problem/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].ff;
        cin >> v[i].ss;
    }
    //for(auto it:v) cout << it.first << " " << it.second << "\n";
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(v[i].ff == v[j].ss) ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}