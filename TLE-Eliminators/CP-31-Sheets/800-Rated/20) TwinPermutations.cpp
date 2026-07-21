// Problem Link - 

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
    for(int i=0;i<n;i++) cout << n + 1 - v[i] << " ";
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