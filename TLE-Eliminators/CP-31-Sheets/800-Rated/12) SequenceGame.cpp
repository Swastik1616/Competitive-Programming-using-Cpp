// Problem Link - https://codeforces.com/problemset/problem/1862/B

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &it:v) cin >> it;
    
    vector<int> ans;
    ans.push_back(v[0]);
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]) ans.push_back(v[i]);
        ans.push_back(v[i]);
    }
    cout << ans.size() << "\n";
    for(auto it:ans) cout << it << " ";
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