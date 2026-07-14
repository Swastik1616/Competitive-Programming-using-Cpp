// Problem Link - https://codeforces.com/problemset/problem/1859/A

#include<bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &it:a) cin >> it;
    int mx = 0;
    for(auto it:a) mx = max(mx,it);

    vector<int>b,c;
    for(auto it:a){
        if(it==mx) c.push_back(mx);
        else b.push_back(it);
    }

    if(b.size()==0) cout << "-1\n";
    else{
        cout << b.size() << " " << c.size() << "\n";
        for(auto it:b) cout << it << " ";
        cout << "\n";
        for(auto it:c) cout << it << " ";
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